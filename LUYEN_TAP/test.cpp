#include <bits/stdc++.h>
using namespace std;
 
int n, k, a[10], ok = 1;
int b[10];
 
void in(int x) {
    for (int i = 1; i <= x; i++)
        cout << (char)b[i];
    for (int i = 1; i <= x; i++)
        cout << a[i];
    cout << endl;
}
 
void sinhHoanVi() {
    int i = n - 1;
    while (i > 0 && b[i] > b[i + 1]) i--;
    if (i > 0) {
        int j = n;
        while (b[i] > b[j]) j--;
        swap(b[i], b[j]);
        sort(b + i + 1, b + n + 1);
    } else
        ok = 0;
}
 
void sinh(int k) {
    for (int i = 1; i <= n; i++) {
        a[k] = i;
        if (k == n)
            in(n);
        else
            sinh(k + 1);
    }
}
 
void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) b[i] = 'A' + i - 1;
    while (ok) {
        sinh(1);
        sinhHoanVi();
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
