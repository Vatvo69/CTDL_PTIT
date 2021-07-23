#include <bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> a[1005];
int v, e, m;
int color[1005];
bool check(int k, int i)
{

    for (int j : a[k])
    {
        if (color[j] == i)
            return false;
    }
    return true;
}
bool try1(int k)
{
    if (k == v + 1)
        return true;
    for (int i = 1; i <= m; i++)
    {
        if (check(k, i))
        {
            color[k] = i;
            if (try1(k + 1))
            {
                return true;
            }
            color[k] = 0;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> m;
        int start, end;
        for (int i = 0; i < 1005; i++)
            a[i].clear();
        for (int i = 1; i <= e; i++)
        {
            cin >> start >> end;
            a[start].push_back(end);
            a[end].push_back(start);
        }
        memset(chuaxet, false, 1005);
        memset(color, 0, 1005);
        if (try1(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}