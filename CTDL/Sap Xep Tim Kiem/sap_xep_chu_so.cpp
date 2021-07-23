using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20] = {};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                a[s[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (a[i] != 0)
                cout << i << " ";
        }
        cout << endl;
    }
}