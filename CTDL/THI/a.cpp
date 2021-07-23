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
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                st.pop();
                dem++;
            }
            else
            {
                int j;
                for (j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == ')')
                        break;
                }
                if (j - i == 2)
                    st.pop();
            }
        }
    }
}