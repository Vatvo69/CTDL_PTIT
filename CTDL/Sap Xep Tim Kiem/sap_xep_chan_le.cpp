using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin >> n;
    int a[1000] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int b[1000] = {}, dem = 0, dem1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            b[dem++] = a[i];
    }
    sort(b, b + dem);
    dem = 0;
    int c[1000] = {};
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            c[dem++] = a[i];
    }
    sort(c, c + dem);
    int start = 0, end = dem - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << b[start++] << " ";
        }
        else
            cout << c[end--] << " ";
    }
    cout << endl;
}