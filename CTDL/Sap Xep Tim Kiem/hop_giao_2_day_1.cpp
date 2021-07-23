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
        int a[1000] = {}, b[1000] = {};
        map<int, int> un;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            un[a[i]]++;
        for (int i = 0; i < k; i++)
            un[b[i]]++;
        for (auto &it : un)
        {
            if (un[it.first] >= 1)
                cout << it.first << " ";
        }
        cout << endl;
        for (auto &it : un)
        {
            if (un[it.first] > 1)
                cout << it.first << " ";
        }
        cout << endl;
    }
}