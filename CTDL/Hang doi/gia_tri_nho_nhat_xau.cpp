using namespace std;
#include <iostream>
#include <unordered_map>
#include <queue>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> un;
        for (int i = 0; i < s.length(); i++)
            un[s[i]]++;
        priority_queue<int> qu;
        for (auto &id : un)
        {
            qu.push(id.second);
        }
        while (n--)
        {
            int x = qu.top();
            qu.pop();
            x--;
            qu.push(x);
        }
        long long sum = 0;
        while (!qu.empty())
        {
            int x = qu.top();
            qu.pop();
            sum += x * x;
        }
        cout << sum << endl;
    }
}