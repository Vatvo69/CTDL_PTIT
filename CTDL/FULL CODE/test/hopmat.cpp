using namespace std;
#include <bits/stdc++.h>
int n, k, m;
int chuaxet[1005], diqua[1005];
vector<int> a[1005];
void dfs(int u)
{
    for (auto v : a[u])
    {
        if (!chuaxet[v])
        {
            chuaxet[v] = 1;
            diqua[v]++;
            dfs(v);
        }
    }
}
int main()
{
    cin >> n >> k >> m;
    vector<int> person(n);
    for (int i = 0; i < person.size(); i++)
        cin >> person[i];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (auto i : person)
    {
        memset(chuaxet, 0, sizeof(chuaxet));
        chuaxet[i] = 1;
        diqua[i]++;
        dfs(i);
    }
    int res = 0;
    for (int i = 1; i <= k; i++)
        if (diqua[i] == n)
            res++;
    cout << res;
}