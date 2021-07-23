using namespace std;
#include <iostream>
#include <queue>
long long sum(string s)
{
    long long sum = 0;
    for (int i = s.length() - 1; i >= 0; i--)
        sum = 10 * (s[i] - '0') + sum;
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> qu;
        qu.push("9");
        while (true)
        {
            string s1 = qu.front(), s2 = s1;
            qu.pop();
            long long x = sum(s1);
            if (x % n)
            {
                cout << x << endl;
                break;
            }
            qu.push(s1 + "0");
            qu.push(s2 + "9");
        }
    }
}