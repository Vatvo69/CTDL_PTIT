#include<iostream>
#include<stack>
using namespace std;
string solve(string s)
{
	stack<int> st;
	for(int i=0;i<s.length();i++)
	{
			if(s[i]=='(') st.push(i);
			else if(s[i]==')')
			{
				int top=st.top();
				st.pop();
				if(s[top-1]=='-')
				{
					for(int j=top;j<i;j++) 
					{
					    if(s[j]=='+') s[j]='-';
					else if(s[j]=='-') s[j]='+';	
					}
				}
				
			}
	}
	string res="";
	for(int i=0;i<s.length();i++) if(s[i]!='('&&s[i]!=')') res+=s[i];
	return res;
}
int main()
{	
	int t;cin>>t;
	while(t--)
	{
		string s,s2;cin>>s>>s2;
		string res1=solve(s);
		string res2=solve(s2);
		if(res1.compare(res2)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}

}
