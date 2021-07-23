using namespace std;
#include <bits/stdc++.h>
int a[1000], n, ok;
int check()
{
    if (a[1] == 1 && a[n] == 0)
    {
        for (int i = 2; i <= n; i++)
        {
            if (a[i] && a[i - 1])
                return 0;
        }
        return 1;
    }
    return 0;
}
void show()
{
    if (check())
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
                cout << "H";
            else
                cout << "A";
        }
        cout << endl;
    }
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
            show();
            sinh();
        }
        ok = 0;
    }
}