using namespace std;
#include <iostream>
#include <string>
#include <stack>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        string sum = "";
        for (int i = 0; i <= s.length(); i++)
        {
            st.push(i + 1);
            if (i == s.length() || s[i] == 'I')
            {
                while (!st.empty())
                {
                    sum += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << sum << endl;
    }
}