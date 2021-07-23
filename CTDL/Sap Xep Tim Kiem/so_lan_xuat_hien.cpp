using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 10] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
                dem++;
        }
        if (dem == 0)
            cout << -1;
        else
            cout << dem;
        cout << endl;
    }
}