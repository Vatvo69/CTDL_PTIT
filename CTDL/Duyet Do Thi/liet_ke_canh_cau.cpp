using namespace std;
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
vector <int> a[1000];
int n, k, chuaxet[1000], check[1000], dem;
void bfs(int s)
{
	queue<int> qu;
	qu.push(s);
	chuaxet[s] = 1;
	dem++;
	while (!qu.empty())
	{
		int u = qu.front();
		qu.pop();
		for (int v = 0; v < a[u].size(); v++)
		{
			if (!chuaxet[a[u][v]] && a[u][v])
			{
				qu.push(a[u][v]);
				dem++;
				chuaxet[a[u][v]] = 1;
			}
		}
	}
}
void loopCau()
{
	vector <pair<int,int> >res;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			int m = a[i][j], index = -1;
			for (int z = 0; z < a[m].size(); z++)
			{
				if (a[m][z] == i) index = z;
			}
			a[i][j] = 0;
			a[m][index] = 0;
			bfs(1);
			if (dem != n)
			{
				if (!check[i] && !check[m])
				{
					res.push_back({i,m});
				}
				check[i] = 1;
				check[m] = 1;
			}
			dem = 0;
			for (int z = 1; z <= n; z++) chuaxet[z] = 0;
			a[i][j] = m;
			a[m][index] = i;
		}
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i].first<<" "<<res[i].second<<" ";
	}
	cout<<endl;
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
		loopCau();
		for (int i = 1; i <= n; i++) a[i].clear();
		for(int i=1;i<=n;i++) chuaxet[i]=0;
		for(int i=1;i<=n;i++) check[i]=0;
		dem=0;
	}
}
