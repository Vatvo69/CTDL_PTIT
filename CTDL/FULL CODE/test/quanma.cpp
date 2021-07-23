using namespace std;
#include <bits/stdc++.h>
string s1, s2;
int x, y, u, v;
struct tree
{
    int i, j, d;
};
int check(int i, int j)
{
    if (i >= 1 && i <= 8 && j >= 1 && j <= 8)
        return 1;
    return 0;
}

int X[] = {-1, -1,-1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0,1 };
int solve()
{
    map<pair<int, int>, int> chuaxet;
    queue<tree> qu;
    qu.push({y, x, 0});
    chuaxet[{y, x}] = 1;
    while (!qu.empty())
    {
        tree z = qu.front();
        qu.pop();
        if (z.i == v && z.j == u)
            return z.d;
        for (int i = 0; i < 8; i++)
        {
            int r = z.i + Y[i];
            int c = z.j + X[i];
            if (!chuaxet[{r, c}] && check(r, c))
            {
                chuaxet[{r, c}] = 1;
                qu.push({r, c, z.d + 1});
            }
        }
    }
    return 0;
}
int main()
{
    
       cin>>x>>y>>u>>v;
        cout << solve() << endl;

}
