using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> so;
        stack<char> chu;
        for (int i = 0; i < s.length(); i++)
        {
            int sum = 0;
            if (s[i] >= '0' && s[i] <= '9')
            {
                while (s[i] >= '0' && s[i] <= '9')
                {
                    sum = sum * 10 + s[i] - '0';
                    i++;
                }
                i--;
                so.push(sum);
            }
            else if(s[i]==']')
            {
                
            }
        }
    }
}