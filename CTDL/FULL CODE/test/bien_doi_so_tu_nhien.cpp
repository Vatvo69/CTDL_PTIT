using namespace std;
#include <bits/stdc++.h>
#define ll long long
#include <unordered_map>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<pair<int, int>> qu;
        set<int> S;
        qu.push({n, 0});
        while (!qu.empty())
        {
            pair<int, int> z = qu.front();
            qu.pop();
            if (z.first == 1)
            {
                cout << z.second << endl;
                break;
            }
            for (int i = 2; i * i <= z.first; i++)
            {
                if (z.first % i == 0 && S.find(max(z.first / i, i)) == S.end())
                {
                    S.insert(max(z.first / i, i));
                    qu.push({max(z.first / i, i), z.second + 1});
                }
            }
            if (S.find(z.first - 1) == S.end())
            {
                qu.push({z.first - 1, z.second + 1});
                S.insert(z.first - 1);
            }
        }
    }
}