using namespace std;
#include<iostream>
#include<string>
void solve(string ss,int n,string &s)
{
	if(n==0) return;
	else{
		for(int i=0;i<ss.length()-1;i++)
		{
			for(int j=i+1;j<ss.length();j++)
			{
				if(ss[i]<ss[j]) swap(ss[i],ss[j]);
				if(ss.compare(s)>0) s=ss;
				solve(ss,n-1,s);
				swap(ss[i],ss[j]);
			}
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s,ss;cin>>s;
		ss=s;
		solve(ss,n,s);
		cout<<s<<endl;
	}
}
