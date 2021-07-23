using namespace std;
#include <bits/stdc++.h>
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<string> a;
        queue<string> qu;
        qu.push("6");
        qu.push("8");
        while (true)
        {
            string s1 = qu.front();
            if (s1.length() > n)
                break;
            a.push_back(s1);
            qu.pop();
            qu.push(s1 + '6');
            qu.push(s1 + '8');
        }
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
}