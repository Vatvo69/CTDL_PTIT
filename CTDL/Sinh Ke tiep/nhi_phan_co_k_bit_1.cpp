using namespace std;
#include <bits/stdc++.h>
int n, k, a[1000], ok;
void show()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
void check()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            dem++;
    }
    if (dem == k)
        show();
}
void sinh()
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        memset(a, 0, sizeof(a));
        while (!ok)
        {
            check();
            sinh();
        }
        cout << endl;
        ok = 0;
    }
}