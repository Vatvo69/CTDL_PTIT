using namespace std;
#include <bits/stdc++.h>
int n, a[1000], ok;
int check()
{
    int dem = n+1;
    for (int i = 1; i <= n; i++)
        if (a[i] != a[dem - i])
            return 0;
    return 1;
}
void show()
{
    if (check())
    {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
void solve()
{
    int i = n;
    while (a[i] == 1)
        i--;
    if (i == 0)
        ok = 1;
    else
    {
        a[i] = 1;
        for (int j = i + 1; j <= n; j++)
            a[j] = 0;
    }
}
int main()
{
    cin >> n;
    while (!ok)
    {
        show();
        solve();
    }
}