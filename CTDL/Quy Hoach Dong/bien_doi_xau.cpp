using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string l1, l2;
        cin >> l1 >> l2;
        int dp[1000][1000] = {};
        for (int i = 1; i <= l1.length(); i++)
            dp[i][0] = i;
        for (int i = 1; i <= l2.length(); i++)
            dp[0][i] = i;
        for (int i = 1; i <= l1.length(); i++)
        {
            for (int j = 1; j <= l2.length(); j++)
            {
                int t = 1;
                if (l1[i - 1] == l2[j - 1])
                    t = 0;
                dp[i][j] = min(dp[i - 1][j - 1] + t, min(dp[i - 1][j] + 1, dp[i][j - 1] + 1));
            }
        }
        cout << dp[l1.length()][l2.length()] << endl;
    }
}