using namespace std;
#include <bits/stdc++.h>
int a[15][15], n;
vector<string> res;
void solve(int i, int j, string path)
{
    if (i < 1 || j < 1 || i > n || j > n || a[i][j] == 0)
        return;
    if (i == n && j == n)
    {
        res.push_back(path);
        return;
    }
    
    a[i][j] = 0;
    solve(i + 1, j, path + "D");
    solve(i, j + 1, path + "R");
    a[i][j] = 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        string path = "";
        solve(1, 1, path);
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
