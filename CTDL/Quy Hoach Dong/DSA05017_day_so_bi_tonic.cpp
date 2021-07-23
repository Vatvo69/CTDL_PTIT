#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, dp1[110] = {}, dp2[110] = {}, a[110] = {}; cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) dp1[i] = a[i];
		for (int i = 0; i < n; i++) dp2[i] = a[i];
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (a[i] > a[j]) dp1[i] = max(dp1[i], a[i] + dp1[j]);
			}
		}
		for (int i = n - 2; i >= 0; i--)
		{
			for (int j = n - 1; j > i; j--)
			{
				if (a[i] > a[j]) dp2[i] = max(dp2[i], dp2[j] + a[i]);
			}
		}
		int max1 = 0;
		for (int i = 0; i < n; i++) max1 = max(max1, dp1[i] + dp2[i] - a[i]);
		cout << max1 << endl;
	}
}

