using namespace std;
#include <iostream>
#include <algorithm>
#include <cstring>
long long a[1000], c[100][300], n, m;
void solve()
{
    long long res = -1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] > j)
                c[i][j] = c[i - 1][j];
            else
                c[i][j] = max(c[i - 1][j - a[i]] + a[i], c[i - 1][j]);
            res = max(res, c[i][j]);
        }
    }
    cout << res << endl;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    solve();
}