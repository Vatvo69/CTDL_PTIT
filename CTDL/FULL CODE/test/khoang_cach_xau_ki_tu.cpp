using namespace std;
#include <bits/stdc++.h>
int n;
string be, en;
set<string> S;
int solve()
{
    map<string, set<string>> M;
    if (be == en)
        return 0;
    for (int i = 0; i < be.size(); i++)
    {
        string s1 = be.substr(0, i) + '*' + be.substr(i + 1);
        M[s1].insert(be);
    }
    for (auto &it : S)
    {
        for (int i = 0; i < it.size(); i++)
        {
            string s1 = it.substr(0, i) + '*' + it.substr(i + 1);
            M[s1].insert(it);
        }
    }
    queue<pair<string, int>> qu;
    map<string, int> chuaxet;
    qu.push({be, 1});
    chuaxet[be] = 1;
    while (!qu.empty())
    {
        pair<string, int> z = qu.front();
        qu.pop();
        if (z.first == en)
            return z.second;
        for (int i = 0; i < z.first.size(); i++)
        {
            string s1 = z.first.substr(0, i) + '*' + z.first.substr(i + 1);
            set<string> Set = M[s1];
            for (auto j : Set)
            {
                if (!chuaxet[j])
                {
                    chuaxet[j] = 1;
                    qu.push({j, z.second + 1});
                }
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> be >> en;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            S.insert(s);
        }
        cout << solve() << endl;
        S.clear();
    }
}