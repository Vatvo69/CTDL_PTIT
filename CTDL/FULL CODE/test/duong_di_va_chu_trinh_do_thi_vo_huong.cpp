using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[1000], bac[1000];
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
            if (!chuaxet[v])
            {
                qu.push(v);
                chuaxet[v] = 1;
            }
        }
    }
}
int check_lien_thong()
{
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        if (!chuaxet[i])
            return 0;
    }
    return 1;
}
int check()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (bac[i] % 2 != 0)
            dem++;
    }
    if (dem == 2 || dem == 0)
        return 1;
    else
        return 0;
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
            bac[x]++;
            bac[y]++;
        }
        if (check_lien_thong())
        {
            int i;
            for (i = 1; i <= n; i++)
                if (bac[i] % 2 != 0)
                    break;
            if (i > n)
                cout << 2 << endl;
            else if (check())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(bac, 0, sizeof(bac));
        for (int i = 1; i <= n; i++)
            a[i].clear();
    }
}