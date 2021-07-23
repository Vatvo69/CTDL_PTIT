using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, t;
        cin >> t >> s;
        stack<int> st;
        st.push(s);
        while (s > t)
        {
            if (s % 2 == 0)
                s /= 2;
            else
                s++;
            st.push(s);
        }
        st.pop();
        while (t >= s)
        {
            st.push(s);
            s++;
        }
        cout << st.size() - 1 << endl;
    }
}