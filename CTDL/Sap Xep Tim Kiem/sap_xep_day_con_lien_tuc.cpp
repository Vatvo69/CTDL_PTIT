using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000] = {}, b[1000] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        copy(a, a + n, b);
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cout << i + 1 << " ";
                break;
            }
        }
        n--;
        while (n--)
        {
            if (a[n] != b[n])
            {
                cout << n + 1 << endl;
                break;
            }
        }
    }
}