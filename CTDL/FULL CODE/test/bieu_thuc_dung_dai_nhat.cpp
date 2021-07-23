#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        st.push(-1);
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')' && s[i] == '(')
            {
                st.pop();
                dem += 2;
            }
        }
        cout << dem << endl;
    }
}
