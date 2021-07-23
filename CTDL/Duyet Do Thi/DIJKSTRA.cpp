using namespace std;
#include<iostream>
int n, k, u;
long long a[100][100],chuaxet[1000],d[1000];
void solve()
{
	chuaxet[u] = 1;
	d[u] = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i != u) d[i] = a[u][i];
	}
	int tmp = 0;
	long long min_tmp = 0;
	while (tmp < n)
	{
		min_tmp = INT_MAX;
		int index;
		for (int i = 1; i <= n; i++)
		{
			if (!chuaxet[i] && d[i] < min_tmp)
			{
				min_tmp = d[i];
				index = i;
			}
		}
		chuaxet[index] = 1;
		for (int i = 1; i <= n; i++)
		{
			if (!chuaxet[i] && d[i] > d[index] + a[index][i]) d[i] = d[index] + a[index][i];
		}
		tmp++;
	}
	for (int i = 1; i <= n; i++) cout << d[i] << " ";
	cout << endl;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k >> u;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++) a[i][j] = INT_MAX;
		}
		for (int i = 1; i <= k; i++)
		{
			int x, y, w; cin >> x >> y >> w;
			a[x][y] = w < a[x][y] ? w : a[x][y];
			a[y][x] = w < a[y][x] ? w : a[y][x];
		}
		solve();
	}
}
