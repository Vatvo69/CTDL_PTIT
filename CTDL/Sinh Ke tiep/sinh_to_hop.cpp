using namespace std;
#include <bits/stdc++.h>
int n, k, a[1000], ok;
void show()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}
void sinh()
{
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i == 0)
        ok = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
            a[j] = a[i] - i + j;
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
        for (int i = 1; i <= k; i++)
            a[i] = i;
        while (!ok)
        {
            show();
            sinh();
        }
        ok = 0;
    }
}