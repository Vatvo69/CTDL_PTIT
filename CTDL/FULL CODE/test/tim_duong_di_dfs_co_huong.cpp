using namespace std;
#include <bits/stdc++.h>
int n, k, chuaxet[1000], b, e, truoc[1000];
vector<int> a[1000];
void dfs(int s)
{
    stack<int> st;
    st.push(s);
    chuaxet[s] = 1;
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        for (auto v : a[u])
        {
            if (!chuaxet[v])
            {
                chuaxet[v] = 1;
                truoc[v] = u;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}
void solve()
{
    if (!truoc[e])
        cout << "-1";
    else
    {
        stack<int> st;
        st.push(e);
        int u = truoc[e];
        while (u)
        {
            st.push(u);
            u = truoc[u];
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> b >> e;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(b);
        solve();
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(truoc, 0, sizeof(truoc));
        for (int i = 1; i <= n; i++)
            a[i].clear();
    }
}