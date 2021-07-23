using namespace std;
#include <iostream>
#include <stack>
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int t, s;
        cin >> t >> s;
        stack<int> st;
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
        st.pop();
        while (!st.empty())
        {
            int xNew = st.top();
            st.pop();
            if (xNew > t)
            {
                cout << t << " * 2 = " << xNew << endl;
            }
            else
                cout << t << " - 1 = " << xNew << endl;
            t = xNew;
        }
    }
}