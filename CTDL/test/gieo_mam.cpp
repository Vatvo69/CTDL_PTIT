using namespace std;
#include <bits/stdc++.h>
#define pair <int, int> pii;
int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, -1, 1};
int a[505][505], chuaxet[505][505], dem, n, k, res;
struct tree
{
    int i, j, d;
};
vector<tree> V;
int check(int i, int j)
{
    if (i >= 1 && j >= 1 && i <= n && j <= k)
        return 1;
    return 0;
}
void bfs(tree s)
{
    queue<tree> qu;
    qu.push(s);
    while (!qu.empty())
    {
        tree z = qu.front();
        qu.pop();

        for (int u = 0; u < 4; u++)
        {
            int x = z.i + Y[u];
            int y = z.j + X[u];
            if (check(x, y) && a[x][y] == 1)
            {
                a[x][y] = 2;
                qu.push({x, y, z.d + 1});
                dem--;
                res = max(res, z.d);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 2)
                    V.push_back({i, j, 0});
                else if (a[i][j] == 1)
                    dem++;
            }
        }
        for (auto v : V)
        {
            bfs(v);
        }
        if (dem)
            cout << "-1" << endl;
        else
            cout << res << endl;
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(a, 0, sizeof(a));
    }
}