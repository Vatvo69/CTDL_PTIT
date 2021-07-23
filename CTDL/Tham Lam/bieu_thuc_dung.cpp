using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[')
                st.push(s[i]);
            else if (s[i] == ']' && !st.empty())
            {
                char top = st.top();
                if (top == '[')
                {
                    dem++;
                    st.pop();
                }
            }
        }
        if (dem * 2 == s.length())
            cout << 0 << endl;
        else
            cout << s.length() - dem * 2 << endl;
    }
}