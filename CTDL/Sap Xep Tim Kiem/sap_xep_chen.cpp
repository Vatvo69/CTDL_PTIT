using namespace std;
#include <bits/stdc++.h>
int a[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 1 && key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        cout << "Buoc " << i - 1 << ": ";
        for (int j = 1; j <= i; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}