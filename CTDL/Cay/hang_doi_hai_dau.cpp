using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin >> n;
    map<int, int> un;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        un[x]++;
    }
    for (auto &it : un)
    {
        cout << it.first << " ";
    }
}
