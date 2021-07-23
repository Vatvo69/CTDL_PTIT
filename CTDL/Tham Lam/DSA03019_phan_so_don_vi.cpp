using namespace std;
#include <bits/stdc++.h>
long long tu, mau;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> tu >> mau;
		long long res;
		while (true)
		{
			if (mau % tu == 0)
			{
				cout << "1/" << mau / tu << endl;
				break;
			}
			else
			{
				res = mau / tu + 1;
				cout << "1/" << res << " + ";
				tu = tu * res - mau;
				mau = res * mau;
			}
		}
	}
}