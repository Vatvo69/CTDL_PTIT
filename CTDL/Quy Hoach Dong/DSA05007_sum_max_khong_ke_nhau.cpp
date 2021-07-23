#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long a[100000]={},dp[100000]={},n;cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		dp[0]=0;dp[1]=a[1];
		for(int i=2;i<=n;i++) 
		{
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n]<<endl;
	}
}

