#include<iostream>
using namespace std;
#include<vector>
int solve(int n)
{
	int sum=0;
	vector <int> res;
	res.push_back(1);
	res.push_back(1);
	res.push_back(2);
	if(n<=3) return 1;
	for(int i=4;i<=n+1;i++) res.push_back(2*res.back()-res[i-4]);
	return res.back();
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		cout<<solve(n)<<endl;
	}
}

