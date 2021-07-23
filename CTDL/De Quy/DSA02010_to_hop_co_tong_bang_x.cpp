#include<bits/stdc++.h>
using namespace std;
int n, k,a[100];
vector <int> res;
vector <vector <int> > res1;
void solve(int i, int sum)
{
	if (sum == k) {
		res1.push_back(res);
		return;
	}
	for (int j = i; j < n; j++)
	{
		if (sum + a[j] <= k)
		{
			res.push_back(a[j]);
			solve(j, sum + a[j]);
			res.pop_back();
		}

		else return;
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		solve(0, 0);
		if(res1.size()==0) cout<<"-1";
		else{
		    for (int i = 0; i < res1.size(); i++)
	    	{
    			cout << "[";
    			for (int j = 0; j < res1[i].size()-1; j++) cout << res1[i][j] << " ";
    			cout << res1[i][res1[i].size() - 1] << "]";
	    	}   
		}
		cout << endl;
		res1.clear();
		res.clear();
	}
}
