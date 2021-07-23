using namespace std;
#include <iostream>
int a[1000], n;
void show()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void solve()
{
    int j = n;
    while (a[j] == 1)
        j--;
    if (j == 0)
    {
        show();
        return;
    }
    a[j] = 1;
    for (int i = j + 1; i <= n; i++)
        a[i] = 0;
    show();
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
    }
}