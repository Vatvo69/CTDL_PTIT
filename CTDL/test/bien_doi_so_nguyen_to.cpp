using namespace std;
#include <bits/stdc++.h>
int p[10000], be, en;
typedef pair<int, int> pii;
void sang()
{
    for (int i = 2; i <= 10000; i++)
    {
        if (!p[i])
        {
            for (int j = i * i; j <= 10000; j += i)
                p[j] = 1;
        }
    }
}
int solve()
{
    if (be == en)
        return 0;
    queue<pii> qu;
    int chuaxet[10000] = {};
    qu.push({be, 1});
    chuaxet[be] = 1;
    while (!qu.empty())
    {
        pii z = qu.front();
        qu.pop();
        int tmp = z.first, num[4] = {}, dem = 0;
        while (tmp > 0)
        {
            num[dem++] = tmp % 10;
            tmp /= 10;
        }
        //don vi
        for (int i = 0; i <= 9; i++)
        {
            int next = 1000 * num[3] + 100 * num[2] + 10 * num[1] + i;
            if (!p[next] && !chuaxet[next])
            {
                chuaxet[next] = 1;
                qu.push({next, z.second + 1});
            }
            if (next == en)
                return z.second;
        }
        //chuc
        for (int i = 0; i <= 9; i++)
        {
            int next = 1000 * num[3] + 100 * num[2] + 10 * i + num[0];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push({next, z.second + 1});
                if (next == en)
                    return z.second;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            int next = 1000 * num[3] + 100 * i + 10 * num[1] + num[0];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push({next, z.second + 1});
            }
            if (next == en)
                return z.second;
        }
        for (int i = 1; i <= 9; i++)
        {
            int next = i * 1000 + 100 * num[2] + 10 * num[1] + num[0];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push({next, z.second + 1});
            }
            if (next == en)
                return z.second;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    sang();
    while (t--)
    {
        cin >> be >> en;
        cout << solve() << endl;
    }
}