using namespace std;
#include <iostream>
int find(int a[], int l, int r, int key)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (a[m] == key)
        return m;
    if (a[l] <= a[m])
    {
        if (key >= a[l] && key <= a[m])
            return find(a, l, m - 1, key);
        return find(a, m + 1, r, key);
    }
    if (key >= a[m] && key <= a[r])
    {
        return find(a, m + 1, r, key);
    }
    return find(a, l, m - 1, key);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[1000] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x = find(a, 0, n - 1, k);
        cout << x + 1 << endl;
    }
}