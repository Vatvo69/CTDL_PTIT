using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,dp[10000]={},num2=2,num3=3,num5=5,i2=0,i3=0,i5=0;cin>>n;
		dp[0]=1;
		for(int i=1;i<=n;i++)
		{
			int x=min(min(num2,num3),num5);
			if(x==num2)
			{
				dp[i]=num2;
				i2++;
				num2=dp[i2]*2;
			}
			if(x==num3)
			{
				dp[i]=num3;
				i3++;
				num3=dp[i3]*3;
			}
			if(x==num5)
			{
				dp[i]=num5;
				i5++;
				num5=dp[i5]*5;
			}
		}
		cout<<dp[n-1]<<endl;
	}
}
