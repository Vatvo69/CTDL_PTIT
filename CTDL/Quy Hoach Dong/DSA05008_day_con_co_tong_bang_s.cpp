#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,dp[40000]={},a[40000]={};cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		dp[0]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=k;j>=a[i];j++)
				if(dp[j-a[i]]==1) dp[j]=1;
		}
		for(int i=1;i<=n;i++) cout<<dp[i]<<" ";
	}
}

