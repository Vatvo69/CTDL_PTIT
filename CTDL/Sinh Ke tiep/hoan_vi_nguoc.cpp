#include<iostream>
using namespace std;
int n, ok, a[100];
void xuat()
{
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}
void sinh()
{
	int i = n - 1;
	while (a[i] < a[i + 1]) i--;
	if (i < 0) ok = 1;
	else {
		int j = n;
		while (a[j] > a[i]) j--;
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while (l < r) swap(a[l++], a[r--]);
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		int dem = 1;
		for (int i = n; i > 0; i--) a[dem++] = i;
		while (!ok)
		{
			xuat();
			sinh();
		}
		ok = 0;
		cout << endl;
	}
}

