using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> dp(n);
        stack<ll> st;
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && a[st.top()] <= a[i])
                st.pop();
            if (st.empty())
                dp[i] = i + 1;
            else
                dp[i] = i - st.top();
            st.push(i);
        }
        for (int i = 0; i < n; i++)
            cout << dp[i] << " ";
        cout << endl;
    }
}