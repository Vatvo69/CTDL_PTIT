#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s;cin >> s;
		int dp[1005][1005] = {}, n = s.length();

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (s[i - 1] == s[j - 1] && i != j) dp[i][j] = 1 + dp[i - 1][j - 1];
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout << dp[n][n] << endl;
	}
}
