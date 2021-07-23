using namespace std;
#include <bits/stdc++.h>
long long dp[10000], num[100];
string s;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            num[i] = s[i] - '0';
        dp[0] = num[0];
        long long res = dp[0];
        for (int i = 1; i < s.length(); i++)
        {
            dp[i] = (i + 1) * num[i] + 10 * dp[i - 1];
            res += dp[i];
        }
        cout << res << endl;
    }
}