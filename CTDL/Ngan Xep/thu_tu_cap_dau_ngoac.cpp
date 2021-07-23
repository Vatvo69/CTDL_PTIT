using namespace std;
#include <bits/stdc++.h>
int main()
{
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int dem = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                cout << dem << " ";
                st.push(dem);
                dem++;
            }
            else if (s[i] == ')')
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
        cout << endl;
    }
}