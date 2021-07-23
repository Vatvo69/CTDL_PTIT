using namespace std;
#include <bits/stdc++.h>
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[10000] = {};
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> res;
        for (int i = 0; i < n; i++)
            res.push_back({abs(a[i] - k), i});
        sort(res.begin(), res.end(), cmp);
        for (auto &it : res)
            cout << a[it.second] << " ";
        cout << endl;
    }
}