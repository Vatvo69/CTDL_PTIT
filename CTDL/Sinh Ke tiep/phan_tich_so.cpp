#include <bits/stdc++.h>
using namespace std;
int b[20], n;
void ghinhan(int k)
{
    for (int j = 0; j <= k; j++)
        cout << b[j] << " ";
    cout << endl;
}
int kt(int k)
{
    for (int i = 0; i < k; i++)
        if (b[i] > b[i + 1])
            return 0;
    return 1;
}
void them(int k, int s)
{
    for (int y = 1; y <= (n - s); y++)
    {
        b[k] = y;
        if (((s + b[k]) == n && kt(k)))
            ghinhan(k);
        else
            them(k + 1, s + b[k]);
    }
}
int main()
{
    cin >> n;
    them(0, 0);
}