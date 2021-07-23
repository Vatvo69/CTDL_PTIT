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
        int a[100] = {}, dem = 0;
        for (auto &id : un)
        {
            a[dem++] = id.second;
        }
        //priority_queue <int, vector<int>, greater<int> > pq(a,a+dem);
        priority_queue<int> pq;
        for (int i = 0; i < dem; i++)
            pq.push(a[i]);
        while (n--)
        {
            int top = pq.top();
            top--;
            pq.pop();
            pq.push(top);
        }
        long long sum = 0;
        while (!pq.empty())
        {
            long long top = pq.top();
            sum += top * top;
            pq.pop();
        }
        cout << sum << endl;
    }
}