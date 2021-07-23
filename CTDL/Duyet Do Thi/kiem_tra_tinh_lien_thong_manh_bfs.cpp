using namespace std;
#include <iostream>
#include <queue>
int n, k, arr[100][100], chuaxet[1000], a, b;
void bfs(int x)
{
    queue<int> qu;
    qu.push(x);
    chuaxet[x] = 1;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (int v = 1; v <= n; v++)
        {
            if (chuaxet[v] == 0 && arr[u][v] == 1)
            {
                qu.push(v);
                chuaxet[v] = 1;
            }
        }
    }
}
int check()
{
    for (int i = 1; i <= n; i++)
        if (chuaxet[i] == 0)
            return 0;
    return 1;
}
int solve()
{
    for (int u = 1; u <= n; u++)
    {
        chuaxet[u] = 1;
        if (u == 1)
            bfs(2);
        else
            bfs(1);
        if (check() == 0)
            return 0;
        memset(chuaxet, 0, sizeof(chuaxet));
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
            cin >> a >> b;
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
        if (solve() == 1)
            cout << "YES" << endl;
        else
            cout << "NO";
        memset(arr, 0, sizeof(arr));
        memset(chuaxet, 0, sizeof(chuaxet));
    }
}