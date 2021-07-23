using namespace std;
#include <bits/stdc++.h>
string res, s1, tmp;
int check()
{
    if (s1[0] == res[0] && s1[1] == res[1] && s1[2] == res[2] && s1[3] == res[3] && s1[4] == res[4] && s1[5] == res[5])
        return 1;
    return 0;
}
string left()
{
    s1[0] = tmp[3];
    s1[1] = tmp[0];
    s1[2] = tmp[2];
    s1[3] = tmp[4];
    s1[4] = tmp[1];
    s1[5] = tmp[5];
    return s1;
}
string right()
{
    s1[0] = tmp[0];
    s1[1] = tmp[4];
    s1[2] = tmp[1];
    s1[3] = tmp[3];
    s1[4] = tmp[5];
    s1[5] = tmp[2];
    return s1;
}
//  0 1 2   => 3 0 2 => 0 4 1
//  3 4 5      4 1 5    3 5 2
void bfs()
{
    queue<pair<string, int>> qu;
    while (1)
    {
        pair<string, int> z = qu.front();
        s1 = z.first;
        tmp = z.first;
        if (check())
        {
            cout << z.second << endl;
            break;
        }
        else
        {
            qu.push({left(), z.second + 1});
            qu.push({right(), z.second + 1});
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        for (int i = 0; i < 6; i++)
        {
            cin >> s;
            s1 += s;
        }
        for (int i = 0; i < 6; i++)
        {
            cin >> s;
            res += s;
        }
        bfs();
    }
}