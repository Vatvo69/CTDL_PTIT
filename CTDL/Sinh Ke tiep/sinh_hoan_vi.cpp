using namespace std;
#include <bits/stdc++.h>
int n, a[1000], ok;
void show()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void sinh()
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = 1;
    else
    {
        int j = n;
        while (a[j] < a[i])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
            swap(a[l++], a[r--]);
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
        for (int i = 1; i <= n; i++)
            a[i] = i;
        while (!ok)
        {
            show();
            sinh();
        }
        cout << endl;
        ok = 0;
    }
}