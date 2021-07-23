#include<iostream>
using namespace std;
long long a[100];
void sang()
{
	a[1] = 1; a[2] = 1;
	for (int i = 3; i < 100; i++)
	{
		long long  x = a[i - 2],y=a[i-1];
		a[i] = x+y;

	}
}
string solve(long long n, long long k)
{
	if (n == 1) return "A";
	else if (n == 2) return "B";
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

