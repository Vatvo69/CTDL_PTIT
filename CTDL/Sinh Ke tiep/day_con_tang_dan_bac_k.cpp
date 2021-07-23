using namespace std;
#include <bits/stdc++.h>
int a[1000], n, k, ok, b[1000], dem;
int show()
{
    for (int i = 2; i <= k; i++)
    {
        if (b[a[i]] < b[a[i - 1]])
            return 0;
    }
    return 1;
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
        for (int j = i + 1; j <= k; j++)
            a[j] = a[i] - i + j;
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        a[i] = i;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    while (!ok)
    {
        if (show())
            dem++;
        sinh();
    }
    cout << dem;
}