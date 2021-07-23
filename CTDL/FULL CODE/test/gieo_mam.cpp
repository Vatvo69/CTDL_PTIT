using namespace std;
#include <bits/stdc++.h>
int n, m, a[505][505];
struct tree
{
    int x, y, d;
};
int X[] = {0, 0, -1, 1};
int Y[] = {1, -1, 0, 0};
int check(int i, int j)
{
    if (i <= n && i >= 1 && j <= m && j >= 1)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int res = -1;
        queue<tree> qu;
        int dem = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 2)
                {
                    qu.push({i, j, 0});
                }
                else if (a[i][j] == 1)
                    dem++;
            }
        }
        while (!qu.empty())
        {
            tree z = qu.front();
            qu.pop();
            for (int i = 0; i < 4; i++)
            {
                int x = z.x + Y[i];
                int y = z.y + X[i];
                if (a[x][y] == 1 && check(x, y))
                {
                    a[x][y] = 2;
                    dem--;
                    qu.push({x, y, z.d + 1});
                    res = max(res, z.d + 1);
                }
            }
        }
        if (dem)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}