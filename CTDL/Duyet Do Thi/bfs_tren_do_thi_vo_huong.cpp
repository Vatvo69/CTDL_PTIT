using namespace std;
#include <iostream>
#include <queue>
int n, k, m, a, b;
void bfs(int x, int arr[][100], int chuaxet[])
{
    cout << x << " ";
    chuaxet[x] = 1;
    queue<int> qu;
    qu.push(x);
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (int v = 1; v <= n; v++)
        {
            if (chuaxet[v] == 0 && arr[u][v] == 1)
            {
                cout << v << " ";
                chuaxet[v] = 1;
                qu.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> m;
        int arr[100][100] = {}, chuaxet[1000] = {};
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
        bfs(m, arr, chuaxet);
        cout << endl;
    }
}