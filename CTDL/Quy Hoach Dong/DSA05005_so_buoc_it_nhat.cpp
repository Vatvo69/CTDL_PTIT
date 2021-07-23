using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,a[1000]={},dp[1000]={};
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i],dp[i]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>=a[j]) dp[i]=max(dp[i],dp[j]+1);
			}
		}
		int max1=-1e9;
		for(int i=0;i<n;i++) max1=max(max1,dp[i]);
		cout<<n-max1<<endl;
		 
	}
}
