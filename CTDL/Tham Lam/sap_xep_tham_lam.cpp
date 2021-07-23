using namespace std;
#include <bits/stdc++.h>
int n, a[1000], b[1000];
int solve()
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[n - i - 1] != b[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        copy(a, a + n, b);
        sort(b, b + n);
        if (solve())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}