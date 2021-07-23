using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, a[1000] = {}, dp[1000];
        cin >> n;
        for (int i = 0; i <= n; i++)
            dp[i] = 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        int res = -1;
        for (int i = 0; i < n; i++)
            res = max(res, dp[i]);
        cout << "Test " << k << ": " << res << endl;
    }
}