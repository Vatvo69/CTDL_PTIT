using namespace std;
#include <iostream>
#include <vector>
int n, k, a, b;
vector<int> v[1000];
void reset()
{
    for (int i = 1; i <= n; i++)
        v[i].clear();
}
void add()
{
    v[a].push_back(b);
}
void show()
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            add();
        }
        show();
        reset();
    }
}
