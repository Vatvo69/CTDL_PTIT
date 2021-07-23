using namespace std;
#include <iostream>
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int dau[1000] = {}, cuoi[1000] = {};
		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;
			dau[x]++;
			cuoi[y]++;
		}
		int ok = 0;
		for (int i = 1; i <= n; i++)
		{
			if (dau[i] != cuoi[i])
				ok = 1;
		}
		if (!ok)
			cout << 1;
		else
			cout << 0;
		cout << endl;
	}
}