using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[10000], a[10000], p[10000];
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
int bfs()
{
    chuaxet[n] = 1;
    queue<int> qu;
    qu.push(n);
    while (!qu.empty())
    {
        int top = qu.front();
        qu.pop();
        int num[4] = {}, top_cpy = top;
        for (int i = 3; i >= 0; i--)
        {
            num[i] = top_cpy % 10;
            top_cpy /= 10;
        }
        for (int i = 0; i <= 9; i++)
        {
            int next = i;
            next += num[0] * 1000 + num[1] * 100 + num[2] * 10;
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push(next);
                a[next] = a[top] + 1;
                if (next == k)
                    return a[next];
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            int next = 10 * i;
            next += num[0] * 1000 + num[1] * 100 + num[3];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push(next);
                a[next] = a[top] + 1;
                if (next == k)
                    return a[next];
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            int next = 100 * i;
            next += num[0] * 1000 + num[2] * 10 + num[3];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push(next);
                a[next] = a[top] + 1;
                if (next == k)
                    return a[next];
            }
        }
        for (int i = 1; i <= 9; i++)
        {
            int next = 1000 * i;
            next += 100 * num[1] + 10 * num[2] + num[3];
            if (!chuaxet[next] && !p[next])
            {
                chuaxet[next] = 1;
                qu.push(next);
                a[next] = a[top] + 1;
                if (next == k)
                    return a[next];
            }
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
        cin >> n >> k;
        cout << bfs() << endl;
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(a, 0, sizeof(a));
    }
}