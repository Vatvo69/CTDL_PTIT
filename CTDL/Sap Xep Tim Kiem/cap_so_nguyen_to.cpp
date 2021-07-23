using namespace std;
#include <bits/stdc++.h>
int snt[10000];
void sang()
{
    for (int i = 2; i <= 10000; i++)
    {
        if (!snt[i])
        {
            for (int j = i * 2; j <= 10000; j += i)
                snt[j] = 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    sang();
    snt[0] = 1;
    snt[1] = 1;
    while (t--)
    {
        int n, ok = 0;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (!snt[i] && !snt[n - i])
            {
                cout << i << " " << n - i << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "-1" << endl;
    }
}