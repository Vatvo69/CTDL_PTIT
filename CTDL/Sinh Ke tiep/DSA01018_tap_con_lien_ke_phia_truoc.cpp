using namespace std;
#include<iostream>
int n, k, a[1000];
void xuat()
{
	for (int i = 1; i <= k; i++) cout << a[i] << " ";
}
void sinh()
{
	int i = k;
	while (a[i] - a[i - 1] == 1) i--;
	if (i == 0)
	{
		for (int j = 1; j <= k; j++) cout << n - k + j << " ";
	}
	else {
		a[i]--;
		for (int j = i + 1; j <= k; j++) a[j] = n - k + j;
		xuat();
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++) cin >> a[i];
		sinh();
		cout << endl;
	}
}
