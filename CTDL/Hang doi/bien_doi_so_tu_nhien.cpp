using namespace std;
#include <iostream>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
typedef pair<ll, ll> pll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<ll, bool> chuaxet;
        queue<pll> qu;
        chuaxet[n] = true;
        qu.push({n, 0});
        while (!qu.empty())
        {
            pll z = qu.front();
            qu.pop();
            if (z.first == 1)
            {
                cout << z.second << endl;
                break;
            }
            for (long long i = sqrt(z.first); i > 1; i--)
            {
                if (z.first % i != 0)
                    continue;
                chuaxet[max(z.first / i, i)] = true;
                qu.push({max(z.first / i, i), z.second + 1});
            }
            if (!chuaxet[z.first - 1])
            {
                qu.push({z.first - 1, z.second + 1});
                chuaxet[z.first - 1] = true;
            }
        }
    }
}