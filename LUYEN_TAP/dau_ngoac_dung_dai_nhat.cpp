using namespace std;
#include <iostream>
#include <stack>
#include <algorithm>
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int max1 = -1;
        st.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.size())
                {
                    max1 = max(max1, i - st.top());
                }
                else
                    st.push(i);
            }
        }
        cout << max1 << endl;
    }
}