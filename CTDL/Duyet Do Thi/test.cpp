using namespace std;
#include <bits/stdc++.h>
long long n, k, s, a[100][100], d[1000], chuaxet[1000];
void solve()
{
    chuaxet[s] = 1;
    d[s] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i != s)
            d[i] = a[s][i];
    }
    long long min_tmp;
    int dem = 0;
    while (dem < n)
    {
        min_tmp = INT_MAX;
        int index;
        for (int i = 1; i <= n; i++)
        {
            if (!chuaxet[i] && d[i] < min_tmp)
            {
                min_tmp = d[i];
                index = i;
            }
        }
        chuaxet[index] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (!chuaxet[i] && d[i] > d[index] + a[index][i])
            {
                d[i] = d[index] + a[index][i];
            }
        }
        dem++;
    }
    for (int i = 1; i <= n; i++)
        cout << d[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                a[i][j] = INT_MAX;
        }
        for (int i = 1; i <= k; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if (z < a[x][y])
                a[x][y] = z;
            if (z < a[y][x])
                a[y][x] = z;
        }
        solve();
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(a, 0, sizeof(a));
    }
}