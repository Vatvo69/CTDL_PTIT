using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[1000];
vector<int> a[1000];
void bfs(int s)
{
    memset(chuaxet, 0, sizeof(chuaxet));
    queue<int> qu;
    qu.push(s);
    chuaxet[s] = 1;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (int v : a[u])
        {
            if (!chuaxet[v])
            {
                chuaxet[v] = 1;
                qu.push(v);
            }
        }
    }
}
int tim(int u, int x)
{
    for (int v : a[u])
    {
        if (v == x)
            return 1;
    }
    return 0;
}
int solve()
{
    for (int i = 1; i <= n; i++)
    {
        bfs(i);
        for (int j = 1; j <= n; j++)
        {
            if (i != j && chuaxet[j] && !tim(i, j))
                return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        memset(chuaxet, 0, sizeof(chuaxet));
        for (int i = 1; i <= n; i++)
            a[i].clear();
    }
}