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
        int a[1000] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (a[0] == a[1])
            cout << "-1";
        else
            cout << a[0] << " " << a[1] << endl;
    }
}