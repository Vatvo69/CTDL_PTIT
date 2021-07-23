#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int solve(int a[][100],string s1,string s2)
{
	int n1=s1.length(),n2=s2.length();
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
			else a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	return a[n1][n2];
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s1,s2;cin>>s1>>s2;
		int a[100][100]={};
		cout<<solve(a,s1,s2)<<endl;
	}
}

