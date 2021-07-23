using namespace std;
#include <iostream>
#include <queue>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<string> qu;
        int n;
        cin >> n;
        qu.push("1");
        while (n--)
        {
            string s1 = qu.front(), s2 = s1;
            cout << s1 << " ";
            qu.pop();
            qu.push(s1 + '0');
            qu.push(s2 + '1');
        }
    }
}