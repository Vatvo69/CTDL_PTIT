using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int n, k, a, b, s, t;
void dfs(int u, int chuaxet[], int arr[][100], int truoc[])
{
    chuaxet[u] = 1;
    for (int v = 1; v <= n; v++)
    {
        if (chuaxet[v] == 0 && arr[u][v] == 1)
        {
            truoc[v] = u;
            dfs(v, chuaxet, arr, truoc);
        }
    }
}
void path(int chuaxet[], int arr[][100], int truoc[])
{
    if (truoc[t] == 0)
    {
        cout << "-1";
        return;
    }
    int j = t;
    vector<int> v;
    v.push_back(j);
    while (truoc[j] != s)
    {
        v.push_back(truoc[j]);
        j = truoc[j];
    }
    v.push_back(s);
    reverse(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k >> s >> t;
        int chuaxet[1000] = {}, arr[100][100] = {}, truoc[1000] = {};
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
        dfs(s, chuaxet, arr, truoc);
        path(chuaxet, arr, truoc);
    }
}