using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[1000] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int res = a[0] + a[1];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < abs(res))
                    res = a[i] + a[j];
            }
        }
        cout << res << endl;
    }
}