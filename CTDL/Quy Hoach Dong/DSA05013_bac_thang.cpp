#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int p=1000000007;
long long solve(int n,int k)
{
	vector <long long> res;
	res.clear();
	res.push_back(1);
	long long sum=0,dem=0;
	for(int i=1;i<=k;i++)
	{
		sum=(sum+res.back())%p;
		res.push_back(sum);
	}
	if(k>=n) return res[n];
	for(int i=k+1;i<=n;i++)
	{
		res.push_back((2*res.back()%p-res[dem++]%p+p)%p);
	}
	return res.back();
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}

