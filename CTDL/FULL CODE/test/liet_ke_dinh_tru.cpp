using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[1000], check[1000];
vector<int> a[1000];
//Loai bo dinh lam tang so thanh phan lien thong
// tinh so thanh phan lien thong ban dau 
// sau khi loai bo so thanh phan lien thong  > so thanh phan lien thong ban dau => dung
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
                chuaxet[v] = 1;
                qu.push(v);
            }
        }
    }
}
int check_lien_thong()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!chuaxet[i])
        {
            dem++;
            bfs(i);
        }
    }
    return dem;
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
        int so = check_lien_thong();
        for (int i = 1; i <= n; i++)
        {
            memset(chuaxet, 0, sizeof(chuaxet));
            chuaxet[i] = 1;
            int sum = 0;
            for (auto j : a[i])
            {
                if (!chuaxet[j])
                {
                    sum++;
                    bfs(j);
                }
            }
            if (sum > so)
                cout << i << " ";
        }
        memset(chuaxet, 0, sizeof(chuaxet));
        for (int i = 1; i <= n; i++)
            a[i].clear();
    }
}