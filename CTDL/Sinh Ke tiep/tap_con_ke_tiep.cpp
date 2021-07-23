using namespace std;
#include <iostream>
int n, k, a[1000];
void show()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}
void solve()
{
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i == 0)
    {
        for (int i = 1; i <= k; i++)
            cout << i << " ";
        cout << endl;
        return;
    }
    a[i]++;
    for (int j = i + 1; j <= n; j++)
        a[j] = a[i] - i + j;
    show();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        solve();
    }
}