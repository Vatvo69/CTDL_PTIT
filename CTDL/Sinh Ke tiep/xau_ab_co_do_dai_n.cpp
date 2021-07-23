using namespace std;
#include <bits/stdc++.h>
int n, a[1000], ok;
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
            cout << "A";
        else
            cout << "B";
    }
    cout << " ";
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
        cin >> n;
        memset(a, 0, sizeof(a));
        while (!ok)
        {
            xuat();
            sinh();
        }
        cout << endl;
        ok = 0;
    }
}