using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m, a[100][100] = {}, dp[110][110] = {},max1=0; cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[i - 1][j - 1] == 1)
					dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
				else dp[i][j] = 0;
				max1 = max(max1, dp[i][j]);
			}
		}
		cout << max1 << endl;
	}
}
