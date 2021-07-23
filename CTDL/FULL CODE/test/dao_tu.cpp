using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.tie(0);
        string s;
        getline(cin, s);

        int pos = 0;
        stack<string> st;
        while ((pos = s.find(' ')) != string::npos)
        {
            string ch = s.substr(pos);
            st.push(ch);
            s.erase(0, pos + 1);
        }
        if (s.length())
            st.push(s);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
