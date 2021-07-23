using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,a[1000]={},dem=0,dp[1000]={};cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		multimap <int,int> m;
		for(int i=0;i<n;i++) m.insert({a[i],i});
		for(auto &it:m) dp[dem++]=it.first;
		n--;
		while(k--)
		{
			cout<<dp[n--]<<" ";
		}
		cout<<endl;
	}
}
