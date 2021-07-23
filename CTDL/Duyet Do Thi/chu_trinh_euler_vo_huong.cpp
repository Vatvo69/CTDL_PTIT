using namespace std;
#include<iostream>
#include<queue>
#include<cstring>
int chuaxet[1000], n, k, a, b, arr[1010][1010], bac[1000];
void bfs(int x)
{
	queue<int> qu;
	chuaxet[x] = 1;
	qu.push(x);
	while (!qu.empty())
	{
		int u = qu.front();
		qu.pop();
		for (int v = 1; v <= n; v++)
		{
			if (chuaxet[v] == 0 && arr[u][v] == 1)
			{
				qu.push(v);
				chuaxet[v] = 1;
			}
		}
	}
}

int check_lien_thong()
{
	bfs(1);
	for (int i = 1; i <= n; i++)
	{
		if (chuaxet[i] == 0) return 0;
	}
	return 1;
}
int check()
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (bac[i] % 2 != 0) dem++;
	}
	if (dem == 2 || dem == 0) return 1;
	else return 0;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> a >> b;
			arr[a][b] = 1;
			arr[b][a] = 1;
			bac[a]++; bac[b]++;
		}
		if (check_lien_thong() == 1)
		{
			int i;
			for (i = 1; i <= n; i++)
			{
				if (bac[i] % 2) break;
			}
			if (i > n) cout << 2 << endl;
			else if (check() == 1) cout << 1 << endl;
			else cout<<0<<endl;
		}
		else cout << 0 << endl;
		memset(bac, 0, sizeof(bac));
		memset(chuaxet, 0, sizeof(chuaxet));
		memset(arr, 0, sizeof(arr));
	}
}
