#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int n=s.length(),res=-1;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(st.size())
				{
					res=max(res,i-st.top());
				}
				else st.push(i);
			}
		}
		cout<<res<<endl;
	}
}

