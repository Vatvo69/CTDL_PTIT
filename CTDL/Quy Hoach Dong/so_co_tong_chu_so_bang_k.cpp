using namespaces std;
#include <bits/stdc++.h>
long long mod = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long dp[100][100] = {};
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= 9; i++)
            dp[1][i] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                for (int so = 0; so <= 9; so++)
                {
                    if (j >= so)
                        dp[i][j] = (dp[i][j] + dp[i - 1][j - so]) % mod;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
}