using namespace std;
#include <iostream>
long long dp[30][30];
void solve()
{
    for (int i = 1; i <= 25; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= 25; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= 25; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
}
int main()
{

    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        cout << dp[n][m] << endl;
    }
}