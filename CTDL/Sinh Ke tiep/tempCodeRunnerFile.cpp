using namespace std;
#include <bits/stdc++.h>
int n, a[1000];
void show()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void solve()
{
    int i = n;
    while (a[i] == 0)
        i--;
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << 1;
    }
    else
    {
        a[i] = 0;
        for (int j = i + 1; j <= n; j++)
            a[j] = 1;
        show();
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.length();
        for (int i = 1; i <= n; i++)
            a[i] = s[i - 1] - '0';
        solve();
        cout << endl;
    }
}