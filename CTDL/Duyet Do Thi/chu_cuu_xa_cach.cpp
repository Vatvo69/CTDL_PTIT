using namespace std;
#include <bits/stdc++.h>
#define pii pair<int, int>
int n, k, m, chuaxet[200][200];
int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, 1, -1};
vector<pii> a;
set<pair<pii, pii>> hangRao;
int check(int i, int j)
{
    if (i <= n && i >= 1 && j <= n && j >= 1)
        return 1;
    return 0;
}
void bfs(pii s)
{
    queue<pii> qu;
    qu.push(s);
    while (!qu.empty())
    {
        pii z = qu.front();
        qu.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = z.first + Y[i];
            int y = z.second + X[i];
            if (check(x, y) && !chuaxet[x][y] && hangRao.find({z, {x, y}}) == hangRao.end())
            {
                chuaxet[x][y] = 1;
                qu.push({x, y});
            }
        }
    }
}
int main()
{
    cin >> n >> k >> m;
    for (int i = 0; i < m; i++)
    {
        int b, c, d, e;
        cin >> b >> c >> d >> e;
        hangRao.insert({{b, c}, {d, e}});
        hangRao.insert({{d, e}, {b, c}});
    }
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    int res = 0;
    for (auto i : a)
    {
        memset(chuaxet, 0, sizeof(chuaxet));
        bfs(i);
        for (auto j : a)
            if (!chuaxet[j.first][j.second])
                res++;
    }
    cout << res / 2;
}