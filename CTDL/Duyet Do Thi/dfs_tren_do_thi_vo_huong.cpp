using namespace std;
#include <iostream>
#include <vector>
int n, k, u, x, y;
void add(int a[][1000])
{
    a[x][y] = 1;
    a[y][x] = 1;
}
void dfs(int u, int chuaxet[], int a[][1000])
{
    chuaxet[u] = 1;
    cout << u << " ";
    for (int v = 1; v <= n; v++)
    {
        if (chuaxet[v] == 0 && a[u][v] == 1)
            dfs(v, chuaxet, a);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[1000][1000] = {};
        cin >> n >> k >> u;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            add(a);
        }
        int chuaxet[1000] = {};
        dfs(u, chuaxet, a);
        cout << endl;
    }
}