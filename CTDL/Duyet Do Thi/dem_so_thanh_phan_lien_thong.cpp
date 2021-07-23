using namespace std;
#include <iostream>
#include <queue>
#include <cstring>
int arr[1005][1005], chuaxet[1005], n, k, a, b;
void dfs(int x)
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
        int dem = 0;
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (chuaxet[i] == 0)
            {
                dem++;
                dfs(i);
            }
        }
        cout << dem << endl;
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(arr, 0, sizeof(arr));
    }
}