#include<iostream>
using namespace std;
int mod = 1e9 + 7;
void fib(long long n, long long& x, long long& y) {
	if (n == 0) {
		x = 0;
		y = 1;
		return;
	}

	if (n & 1) {
		fib(n - 1, y, x);
		y = (y + x) % mod;
	}
	else {
		long long a, b;
		fib(n >> 1, a, b);
		y = (a * a + b * b) % mod;
		x = (a * b + a * (b - a + mod)) % mod;
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long n, x = 0, y = 1; cin >> n;
		fib(n, x, y);
		cout << x << endl;
	}
}

