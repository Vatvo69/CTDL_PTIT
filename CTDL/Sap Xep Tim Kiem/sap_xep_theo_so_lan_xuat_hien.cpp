using namespace std;
#include <bits/stdc++.h>
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000] = {};
        vector<pair<int, int>> res;
        unordered_map<int, int> un;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            un[a[i]]++;
        for (auto it = un.begin(); it != un.end(); it++)
        {
            res.push_back({(*it).first, (*it).second});
        }
        sort(res.begin(), res.end(), cmp);
        for (int i = 0; i < res.size(); i++)
        {
            while (res[i].second--)
                cout << res[i].first << " ";
        }
        cout << endl;
    }
}