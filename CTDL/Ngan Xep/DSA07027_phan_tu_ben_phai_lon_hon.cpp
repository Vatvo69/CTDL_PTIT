using namespace std;
#include <iostream>
#include <stack>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        int n, a[1000] = {}, dp[1000] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= a[i])
                st.pop();
            if (st.empty())
                dp[i] = -1;
            else
                dp[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << dp[i] << " ";
        cout << endl;
    }
}