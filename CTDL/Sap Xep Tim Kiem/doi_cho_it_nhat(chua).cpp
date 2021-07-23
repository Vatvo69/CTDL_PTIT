using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[1000] = {}, b[1000] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        copy(a, a + n, b);
        sort(a, a + n);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                dem++;
                for (int j = n - 1; j >= i + 1; j--)
                {
                    if (b[j] == a[i])
                        swap(b[i], b[j]);
                }
            }
        }
        cout << dem << endl;
    }
}