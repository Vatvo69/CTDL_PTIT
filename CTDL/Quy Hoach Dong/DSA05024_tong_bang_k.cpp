#include<iostream>
using namespace std;
int p=1000000007;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a[1000]={},dp[1000]={};
		for(int i=0;i<n;i++) cin>>a[i];
		dp[0]=1;
		for(int i=1;i<=k;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i>=a[j]) dp[i]=(dp[i]+dp[i-a[j]])%p;
			}
		}
		cout<<dp[k]<<endl;
	}
}

