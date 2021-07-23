using namespace std;
#include <bits/stdc++.h>
vector<string> res;
map<string, int> chuaxet;
void solve(string s)
{
    stack<int> st;
    queue<pair<int, int>> qu;
    vector<pair<int, int>> V;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')')
        {
            V.push_back({st.top(), i});
            st.pop();
        }
    }
    if (V.empty())
        return;
    string tmp = s;
    for (auto i : V)
    {
        string tmp = s;
        tmp.erase(tmp.begin() + i.first);
        tmp.erase(tmp.begin() + i.second - 1);
        if (!chuaxet[tmp])
        {
            chuaxet[tmp] = 1;
            res.push_back(tmp);
            solve(tmp);
        }
    }
}
int main()
{
    string s;
    cin >> s;
    solve(s);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        cout << i << endl;
    }
}