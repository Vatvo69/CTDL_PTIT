using namespace std;
#include <iostream>
int n, a[1000];
void show()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void solve()
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        i--;
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        return;
    }
    int j = n;
    while (a[j] < a[i])
        j--;
    swap(a[i], a[j]);
    int l = i + 1, r = n;
    while (l < r)
        swap(a[l++], a[r--]);
    show();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        solve();
    }
}