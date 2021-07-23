using namespace std;
#include <iostream>
#include <stack>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                int top = st.top();
                st.pop();
                if (s[top - 1] == '-')
                {
                    for (int j = top; j < i; j++)
                    {
                        if (s[j] == '+')
                            s[j] = '-';
                        else if (s[j] == '-')
                            s[j] = '+';
                    }
                }
            }
        }
        for (auto ch : s)
        {
            if (ch != '(' && ch != ')')
                cout << ch;
        }
        cout << endl;
    }
}