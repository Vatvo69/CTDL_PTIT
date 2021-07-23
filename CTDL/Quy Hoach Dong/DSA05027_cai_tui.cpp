using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int w[110] = {}, v[110] = {}, dp[110][110] = {}, n, sum,max1=0;
		cin >> n >> sum;
		for (int i = 1; i <= n; i++) cin >> w[i];
		for (int i = 1; i <= n; i++) cin >> v[i];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= sum; j++)
			{
				if (j >= w[i])	dp[i][j] = max(dp[i - 1][j], v[i] + dp[i - 1][j - w[i]]);
				else dp[i][j] = dp[i - 1][j];
				max1 = max(max1, dp[i][j]);
			}
		}
		cout << max1 << endl;
	}
}
