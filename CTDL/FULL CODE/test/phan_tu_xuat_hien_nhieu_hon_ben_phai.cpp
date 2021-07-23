using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000] = {};
        int dp[1000] = {};
        unordered_map<int, int> un;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            un[a[i]]++;
        for (int i = 0; i < n; i++)
            dp[i] = un[a[i]];
        stack<int> st;
        int res[100] = {};
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && dp[st.top()] <= dp[i])
                st.pop();
            if (st.empty())
                res[i] = -1;
            else
                res[i] = st.top();
            st.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (res[i] == -1)
                cout << "-1"
                     << " ";
            else
                cout << a[res[i]] << " ";
        }
        cout << endl;
    }
}