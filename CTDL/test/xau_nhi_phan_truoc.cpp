using namespace std;
#include <bits/stdc++.h>
typedef pair<int, int> pii;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> chuaxet;
        queue<pii> qu;
        qu.push({n, 0});
        while (!qu.empty())
        {
            pii z = qu.front();
            qu.pop();
            if (z.first == 1)
            {
                cout << z.second << endl;
                break;
            }
            for (int i = 2; i * i <= z.first; i++)
            {
                if (z.first % i == 0 && chuaxet.find(max(z.first / i, i)) == chuaxet.end())
                {
                    qu.push({max(z.first / i, i), z.second + 1});
                    chuaxet.insert(max(z.first / i, i));
                }
            }
            if (chuaxet.find(z.first - 1) == chuaxet.end())
            {
                chuaxet.insert(z.first - 1);
                qu.push({z.first - 1, z.second + 1});
            }
        }
    }
}