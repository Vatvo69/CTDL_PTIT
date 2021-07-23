using namespace std;
#include <bits/stdc++.h>
#define ll long long
string s;
void solve()
{
    ll k = s.length();
    ll l = k, r = -1;
    for (ll i = k - 1; i >= 0; i--)
    {
        if (s[i] == '[')
        {
            l = i;
            break;
        }
    }
    if (l == k)
        return;
    for (ll i = l + 1; i < k; i++)
    {
        if (s[i] == ']')
        {
            r = i;
            break;
        }
    }
    if (r == -1)
        return;
    string b(s.begin() + l + 1, s.begin() + r);
    ll x = 0;
    string X = "";
    ll j = l - 1;
    while (j >= 0 && s[j] >= '0' && s[j] <= '9')
    {
        X += s[j];
        j--;
    }
    ll num = 0;
    if (X.length() == 0)
        num = 1;
    reverse(X.begin(), X.end());
    for (int i = 0; i < X.length(); i++)
        num = num * 10 + X[i] - '0';

    string b1 = "";
    while (num--)
        b1 += b;
    s.replace(s.begin() + j + 1, s.begin() + r + 1, b1);
    solve();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        solve();
        cout << s << endl;
    }
}