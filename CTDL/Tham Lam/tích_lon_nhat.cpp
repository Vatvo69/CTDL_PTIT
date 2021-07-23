using namespace std;
#include <iostream>
#include <algorithm>

int main()
{
    int n;
    cin >> n;
    long long a[10050] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 2)
        cout << a[0] * a[1] << endl;
    else
    {
        sort(a, a + n);
        long long max1 = max(a[n - 1] * a[n - 2], a[0] * a[1]);
        cout << max(max1, max(a[n - 1] * a[n - 2] * a[n - 3], a[0] * a[1] * a[n - 1])) << endl;
    }
}