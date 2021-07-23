using namespace std;
#include <bits/stdc++.h>
int n, k, m, chuaxet[1000], diqua[1000];
vector<int> person;
vector<int> a[1000];
void bfs(int s)
{
    for (int v : a[s])
    {
        if (!chuaxet[v])
        {
            chuaxet[v] = 1;
            diqua[v]++;
            bfs(v);
        }
    }
}
int main()
{
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        person.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i : person)
    {
        memset(chuaxet, 0, sizeof(chuaxet));
        chuaxet[i] = 1;
        diqua[i]++;
        bfs(i);
    }
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (diqua[i] == k)
            dem++;
    cout << dem;
}