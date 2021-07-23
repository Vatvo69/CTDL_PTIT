#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,a[1000]={},dp[1000]={};
		for(int i=0;i<n;i++) cin>>a[i],dp[i]=a[i];
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j]) dp[i]=max(dp[i],a[i]+dp[j]);
			}
		}
		int max1=0;
		for(int i=0;i<n;i++) max1=max(max1,dp[i]);
		cout<<max1<<endl;
	}
}

