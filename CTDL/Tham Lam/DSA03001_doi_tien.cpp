#include<iostream>
using namespace std;
int n, dem, a[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };
void solve()
{
	for (int i = 9; i >= 0; i--)
	{
		if (n >= a[i])
		{
			dem += n / a[i];
			n = n - a[i]*(n / a[i]);
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		solve();
		cout << dem << endl;
		dem = 0;
	}
}

