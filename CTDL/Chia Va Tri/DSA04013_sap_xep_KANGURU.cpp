using namespace std;
#include <bits/stdc++.h>
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		int res = n;
		for (int i = n / 2 - 1, j = n - 1; i >= 0 && j >= n / 2;)
		{
			if (a[j] >= a[i] * 2)
			{
				res--;
				i--;
				j--;
			}
			else
				i--;
		}
		cout << res << endl;
	}
}