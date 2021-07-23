#include<iostream>
using namespace std;
long long a[94];
void sang()
{
	a[0] = 0; a[1] = 1;
	for (int i = 2; i < 94; i++)
		a[i] = a[i - 2] + a[i - 1];
}
int solve(long long n, long long k)
{
	if (n == 1) return 0;
	else if (n == 2) return 1;
	if (k > a[n - 2]) return solve(n - 1, k - a[n - 2]);
	else return solve(n - 2, k);
}
int main()
{
	int t; cin >> t;
	sang();
	while (t--)
	{
		long long n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
}

