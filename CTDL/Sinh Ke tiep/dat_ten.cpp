using namespace std;
#include <bits/stdc++.h>
int n, k, a[1000], ok;
string s;
void show()
{
    for (int i = 1; i <= k; i++)
        cout << s[a[i]];
    cout << endl;
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
    int t;
    cin >> t;
    s += " ";
    for (int i = 65; i <= 65 + 16; i++)
        s += char(i);
    while (t--)
    {
        cin >> n >> k;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= k; i++)
            a[i] = i;
        while (!ok)
        {
            show();
            sinh();
        }
        ok = 0;
    }
}