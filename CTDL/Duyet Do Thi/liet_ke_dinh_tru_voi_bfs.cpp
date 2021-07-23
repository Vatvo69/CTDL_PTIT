#include<iostream>
#include<queue>
using namespace std;
int n, k, chuaxet[1000], dem;
vector <int> a[1000];
void bfs(int s)
{
	queue<int> qu;
	qu.push(s);
	chuaxet[s] = 1;
	while (!qu.empty())
	{
		int u = qu.front();
		qu.pop();
		for (int v = 0; v < a[u].size(); v++)
		{
			if (!chuaxet[a[u][v]])
			{
				chuaxet[a[u][v]] = 1;
				qu.push(a[u][v]);
			}
		}
	}
}
int so_thanh_phan_lien_thong() {
	for (int i = 1; i <= n; i++)
	{
		if (!chuaxet[i])
		{
			dem++;
			bfs(i);
		}
	}
	return dem;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < k; i++)
		{
			int x, y; cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int so = so_thanh_phan_lien_thong();
		
		memset(chuaxet, 0, sizeof(chuaxet));
		for (int i = 1; i <= n; i++)
		{
			memset(chuaxet, 0, sizeof(chuaxet));
			chuaxet[i] = 1;
			int sum = 0;
			for (int j = 1; j <= n; j++)
			{
				if (!chuaxet[j])
				{
					sum++;
					bfs(j);
				}
			}
			if (sum > so) cout << i << " ";
		}
		cout << endl;
		memset(chuaxet, 0, sizeof(chuaxet));
		for (int i = 1; i <= n; i++) a[i].clear();
	}
}

