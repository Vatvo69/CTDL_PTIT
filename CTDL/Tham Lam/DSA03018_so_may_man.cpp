using namespace std;
#include<bits/stdc++.h>
string solve(int n)
{
	int ok=0;
	string s="";
	while(n>0)
	{
		if(n%7==0)
		{
			s+='7';
			n-=7;
			ok=1;
		}
		else
		{
			s+='4';
			n-=4;
		}
		if(n==0) return s;
	}
	if(ok==0) return "-1";
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		cout<<solve(n)<<endl;
		
	}
}
