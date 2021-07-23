using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
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
        int n, sum, a[1000] = {};
        cin >> n >> sum;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            v.push_back({abs(a[i] - sum), i});
        sort(v.begin(), v.end(), cmp);
        for (auto &it : v)
            cout << a[it.second] << " ";
        cout << endl;
    }
}