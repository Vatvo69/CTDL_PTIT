using namespace std;
#include<iostream>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[100][100]={},dp[100][100]={},h,c;cin>>h>>c;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<c;j++) 
			{
				cin>>a[i][j];
				if(i==0||j==0) dp[i][j]=1;	
			}
		}
		for(int i=1;i<h;i++)
		{
			for(int j=1;j<c;j++)
			{
				dp[i][j]=dp[i][j-1]+dp[i-1][j];
			}
		}
		cout<<dp[h-1][c-1]<<endl;
		
	}
}
