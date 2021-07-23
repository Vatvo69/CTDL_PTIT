using namespace std;
#include <bits/stdc++.h>
int r, c, chuaxet[505][505], a[505][505];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
void bfs(int i, int j)
{
    queue<pair<int, int>> qu;
    qu.push({i, j});
    chuaxet[i][j] = 1;
    while (!qu.empty())
    {
        pair<int, int> u = qu.front();
        qu.pop();
        for (int i = 0; i < 8; i++)
        {
            int x = u.first + Y[i];
            int y = u.second + X[i];
            if (!chuaxet[x][y] && a[x][y] && (x >= 1 && x <= r) && (y >= 1 && y <= c))
            {
                chuaxet[x][y] = 1;
                qu.push({x, y});
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
        cin >> r >> c;
        for (int i = 1; i <= r; i++)
            for (int j = 1; j <= c; j++)
                cin >> a[i][j];
        int dem = 0;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (!chuaxet[i][j] && a[i][j])
                {
                    dem++;
                    bfs(i, j);
                }
            }
        }
        cout << dem << endl;
    }
}