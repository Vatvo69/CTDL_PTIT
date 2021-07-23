using namespace std;
#include <iostream>
#include <algorithm>
struct doThi
{
    int a, b, w;
};
doThi E[1000];
int truoc[1000], chuaxet[1000], n, k, e;
bool cmp(doThi A, doThi B)
{
    return A.w < B.w;
}
int find(int i)
{
    while (truoc[i] > -1)
    {
        i = truoc[i];
    }
    return i;
}
void Union(int x, int y)
{
    truoc[x] = y;
}
int solve()
{
    int res = 0, dem = 0;
    for (int i = 1; i <= k; i++)
    {
        int x = find(E[i].a);
        int y = find(E[i].b);
        if (x != y)
        {
            res += E[i].w;
            truoc[x] = y;
            dem++;
        }
        if (dem == n - 1)
            return res;
    }
    return -1;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        cin.tie(0);
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            truoc[i] = -1;
        for (int i = 1; i <= k; i++)
        {
            cin >> E[i].a >> E[i].b >> E[i].w;
        }
        sort(E + 1, E + k + 1, cmp);
        cout << solve() << endl;
    }
}