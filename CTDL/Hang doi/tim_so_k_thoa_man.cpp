using namespace std;
#include <iostream>
#include <unordered_map>
int l, r;
bool solve(int n)
{
    unordered_map<int, int> un;
    while (n > 0)
    {
        int csl = n % 10;
        n /= 10;
        if (csl <= 5)
            un[csl]++;
        else
            return false;
    }
    for (auto &id : un)
    {
        if (id.second != 1)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int dem = 0;
        for (int i = l; i <= r; i++)
        {
            if (solve(i))
                dem++;
        }
        cout << dem << endl;
    }
}