#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int solve(string s)
{
	int dp[45][45]={},n=s.length();
	for(int dem=1;dem<n;dem++)
	{
		for(int i=0,j=dem;j<n;i++,j++)
		{
			dp[i][j]=(s[i]==s[j])?dp[i+1][j-1]:min(dp[i+1][j],dp[i][j-1])+1;
		}
	}
	return dp[0][n-1];
}
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		cout<<solve(s)<<endl;
	}
}

