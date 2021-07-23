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
        st.push(-1);
        int res = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.size())
                {
                    res = max(res, i - st.top());
                }
                else
                    st.push(i);
            }
        }
        cout << res << endl;
    }
}