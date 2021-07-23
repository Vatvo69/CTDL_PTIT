#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,dp[10000]={};cin>>n;
		dp[0]=0;
		dp[1]=1;
		dp[2]=2;
		dp[3]=3;
		for(int i=4;i<=n;i++)
		{
			dp[i]=i;
			for(int j=2;j*j<=i;j++) dp[i]=min(dp[i],dp[i-j*j]+1);
		}
		cout<<dp[n]<<endl;
	}
}

