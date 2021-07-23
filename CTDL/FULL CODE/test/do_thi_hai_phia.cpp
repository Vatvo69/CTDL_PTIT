using namespace std;
#include <bits/stdc++.h>
int n, k;
vector<int> a[1000];
int bfs()
{
    queue<int> qu;
    int chuaxet[1000] = {};
    for (int i = 1; i <= n; i++)
    {
        if (!chuaxet[i])
        {
            chuaxet[i] = 1;
            qu.push(i);
            while (!qu.empty())
            {
                int u = qu.front();
                qu.pop();
                for (int v : a[u])
                {
                    if (!chuaxet[v])
                    {
                        chuaxet[v] = (chuaxet[u] == 1) ? 2 : 1;
                        qu.push(v);
                    }
                    else
                    {
                        if (chuaxet[u] == chuaxet[v])
                            return 0;
                    }
                }
            }
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
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if (bfs())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        for (int i = 1; i <= n; i++)
            a[i].clear();
    }
}