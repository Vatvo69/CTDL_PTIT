using namespace std;
#include<iostream>
int a[100], n, k, sum1, b[100],ok=0;
int solve(int k, int i, int sum)
{
	if (k == 1) return 1;
	if (sum == sum1) solve(k - 1, 0, 0);
	for (int j = i; j < n; j++)
	{
		if (b[j] == 0 && sum + a[j] <= sum1)
		{
			b[j] = 1;
			if (solve(k, j + 1, sum + a[j]) == 1) return 1;
			b[j] = 0;
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) sum1 += a[i];
		if (sum1 % k != 0) cout << 0 << endl;
		else {
			sum1 /= k;
			cout << solve(k, 0, 0) << endl;
			sum1 = 0;
			memset(b, 0, 20);
		}
	}
}