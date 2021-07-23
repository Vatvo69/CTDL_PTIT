x#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int solve(string s)
{
	int dp[100][100]={},n=s.length();
	for(int i=0;i<n;i++) dp[i][i]=1;
	for(int dem=1;dem<n;dem++)
	{
		for(int i=0,j=dem;j<n;i++,j++)
		{
			if(s[i]==s[j]&&dem==1) dp[i][j]=2;
			else dp[i][j]=(s[i]==s[j])?dp[i+1][j-1]+2:max(dp[i+1][j],dp[i][j-1]);
		}
	}
	return dp[0][n-1];
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		cout<<s.length()-solve(s)<<endl;
	}
}

