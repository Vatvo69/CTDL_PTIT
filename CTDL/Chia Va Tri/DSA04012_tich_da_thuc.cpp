#include<iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a[200] = {}, b[200] = {}, m, n; cin >> m >> n;
		for (int i = 0; i < m; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];

			cout << a[0] * b[0] << " ";
			for (int i = 1; i < m+n-1; i++)
			{
				int sum = 0,x=i,y=0;
				while (y <= i)
				{	
					sum += a[x--]*b[y++];
				}
				cout << sum << " ";
			}
		cout << endl;
	}
}

