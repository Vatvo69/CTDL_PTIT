using namespace std;
#include <iostream>
#include <queue>
int a[1000][1000], chuaxet[1000], n, e, s;
void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    chuaxet[s] = 1;
    cout << s << " ";
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (int v = 1; v <= n; v++)
        {
            if (!chuaxet[v] && a[u][v])
            {
                cout << v << " ";
                chuaxet[v] = 1;
                qu.push(v);
            }
        }
    }
}
void reset()
{
	for(int i=1;i<=n;i++)
	{
		chuaxet[i]=0;
		for(int j=1;j<=n;j++) a[i][j]=0;
	}
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> e >> s;
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        bfs(s);
        cout<<endl;
        reset();
    }
}
