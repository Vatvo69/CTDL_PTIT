using namespace std;
#include<iostream>
#include<algorithm>
int n, a[100], b[100], ok, sum;
void solve(int i, int s)
{
	if (s == sum)
	{
		ok = 1;
		return;
	}
	for (int j = i; j < n; j++)
	{
		if (ok == 0 && b[j] == 0 && s + a[j] <= sum)
		{
			b[j] = 1;
			solve(j + 1, s + a[j]);
			b[j] = 0;
		}
		else return;
	}

}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		memset(b, 0, 100);
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) sum += a[i];
		if (sum % 2 != 0) cout << "NO";
		else {
			sort(a, a + n);
			sum /= 2;
			solve(0, 0);
			if (ok == 1) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
		ok = 0;
		sum = 0;
	}
}
