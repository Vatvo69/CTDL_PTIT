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
        stack<int> st;
        for (int i = 0; i <= s.length(); i++)
        {
            if (st.empty() || i == s.length())
                st.push(i++);
            else
            {
                if (s[i] == 'I')
                {
                    while (!st.empty())
                    {
                        cout << st.top();
                        st.pop();
                    }
                }
            }
        }
    }
}