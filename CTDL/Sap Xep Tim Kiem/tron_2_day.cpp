using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n + k; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {
            while ((*it).second--)
            {
                cout << (*it).first << " ";
            }
        }
        cout << endl;
    }
}