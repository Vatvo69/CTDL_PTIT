using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[1000], check[1000];
vector<int> a[1000];
void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    chuaxet[s] = 1;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (auto v : a[u])
        {
            if (!chuaxet[v] && (!check[u] || !check[v]))
            {
                chuaxet[v] = 1;
                qu.push(v);
            }
        }
    }
}
void solve()
{
    for (int u = 1; u <= n; u++)
    {
        for (auto v : a[u])
        {
            check[u] = 1;
            check[v] = 1;
            bfs(1);
            for (int i = 1; i <= n; i++)
            {
                if (!chuaxet[i] && u < v)
                    cout << u << " " << v << " ";
            }
            check[u] = 0;
            check[v] = 0;
            memset(chuaxet, 0, sizeof(chuaxet));
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
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        solve();
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(check, 0, sizeof(check));
        for (int i = 1; i <= n; i++)
            a[i].clear();
        cout << endl;
    }
}