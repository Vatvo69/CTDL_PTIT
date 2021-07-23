using namespace std;
#include <bits/stdc++.h>
#define pii pair<int, int>
int n, m, chuaxet[200][200];
char a[200][200];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int check(int i, int j)
{
    if (i >= 1 && j >= 1 && i <= n && j <= m)
        return 1;
    return 0;
}
void bfs(pii s)
{
    queue<pii> qu;
    qu.push(s);
    chuaxet[s.first][s.second] = 1;
    while (!qu.empty())
    {
        pii z = qu.front();
        qu.pop();
        for (int i = 0; i < 8; i++)
        {
            int x = z.first + Y[i];
            int y = z.second + X[i];
            if (!chuaxet[x][y] && check(x, y) && a[x][y] == 'W')
            {
                chuaxet[x][y] = 1;
                qu.push({x, y});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!chuaxet[i][j] && a[i][j] == 'W')
            {
                dem++;
                bfs({i, j});
            }
        }
    }
    cout << dem << endl;
}