using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')'&&!st.empty())
            {
                if(st.top()=='(') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        int n=st.size(),dem=0;
        while(!st.empty()&&st.top()=='(')
        {
            dem++;
            st.pop();
        }
        cout<<n/2+dem%2<<endl;
    }
}
