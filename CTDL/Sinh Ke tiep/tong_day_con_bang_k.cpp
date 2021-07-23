using namespace std;
#include <bits/stdc++.h>
vector<int> v;
vector<vector<int>> res;
int n, a[1000], sum;
void show()
{
    for (int i = res.size() - 1; i >= 0; i--)
    {
        for (int v : res[i])
            cout << v << " ";
        cout << endl;
    }
}
void solve(int s, int i)
{
    if (s == sum)
        res.push_back(v);
    for (int j = i; j <= n; j++)
    {
        if (s + a[j] > sum)
            return;
        v.push_back(a[j]);
        solve(s + a[j], j + 1);
        v.pop_back();
    }
}
int main()
{
    cin >> n >> sum;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    solve(0, 1);
    show();
    cout << res.size();
}