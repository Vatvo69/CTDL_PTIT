using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a;
        queue<string> qu;
        qu.push("6");
        qu.push("8");
        while (true)
        {
            string s = qu.front();
            if (s.length() > n)
                break;
            qu.pop();
            a.push_back(s);
            qu.push(s + "6");
            qu.push(s + "8");
        }
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
}