using namespace std;
#include<iostream>
#include<math.h>
int solve(long long n, long long k)
{
	long long m = pow(2, n - 1);
	if (m == k) return n;
	if (m > k) return solve(n - 1, k);
	return solve(n - 1, k-m);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long n, k; cin >> n >> k;
		cout<<solve(n, k)<<endl;
	}
}
