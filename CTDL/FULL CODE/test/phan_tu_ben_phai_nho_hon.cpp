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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<int> st;
        int dp[1000] = {};
        //lon hon
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[st.top()] <= a[i])
                st.pop();
            if (st.empty())
                dp[i] = -1;
            else
                dp[i] = st.top();
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        //nho hon
        int nho[1000] = {};
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[st.top()] >= a[i])
                st.pop();
            if (st.empty())
                nho[i] = -1;
            else
                nho[i] = st.top();
            st.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (dp[i] > 0 && nho[dp[i]] > 0)
                cout << a[nho[dp[i]]] << " ";
            else
                cout << "-1"
                     << " ";
        }
        cout << endl;
    }
}