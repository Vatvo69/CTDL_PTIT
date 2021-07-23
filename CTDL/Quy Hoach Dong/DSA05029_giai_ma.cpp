#include<iostream>
#include<string>
using namespace std;
int solve(string s)
{
	int dp[50]={},n=s.length();
	dp[0]=1;
	if(s[0]=='0') return 0;
	else dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(s[i-1]=='0'){
			if(s[i-2]=='1'||s[i-2]=='2') dp[i]=dp[i-2];
			else return 0;
		}
		else{
			if((s[i-2]=='1'||s[i-2]=='2')&&s[i-1]-'0'<7) dp[i]=dp[i-1]+dp[i-2];
			else dp[i]=dp[i-1];
		}
	}
	return dp[n];
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		cout<<solve(s)<<endl;
	}
}

