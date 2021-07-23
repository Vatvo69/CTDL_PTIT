using namespace std;
#include <iostream>
#include <stack>
#include <string>
int solve(string s)
{
    stack<char> st;
    int ok;
    for (char ch : s)
    {
        if (ch == ')')
        {
            ok = 1;
            char top = st.top();
            st.pop();
            while (top != '(')
            {
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    ok = 0;
                top = st.top();
                st.pop();
            }
            if (ok)
                return 1;
        }
        else
            st.push(ch);
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, s;
        cin >> x;
        getline(cin, s);
        s = x + s;
        int check = solve(s);
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}