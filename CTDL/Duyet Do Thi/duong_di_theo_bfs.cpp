using namespace std;
#include <iostream>
#include <queue>
#include <stack>
int n, k, a, b, arr[1005][1005], chuaxet[1005], truoc[1005], s, t;
void bfs(int x)
{
    queue<int> qu;
    qu.push(x);
    chuaxet[x] = 1;
    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[u][v] == 1 && chuaxet[v] == 0)
            {
                chuaxet[v] = 1;
                truoc[v] = u;
                qu.push(v);
            }
        }
    }
}
void path()
{
    if (chuaxet[t] == 0)
        cout << "-1" << endl;
    else
    {
        stack<int> st;
        st.push(t);
        while (truoc[t] != s)
        {
            st.push(truoc[t]);
            t = truoc[t];
        }
        st.push(s);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k >> s >> t;
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
        bfs(s);
        path();
        memset(arr, 0, sizeof(arr));
        memset(chuaxet, 0, sizeof(chuaxet));
        memset(truoc, 0, sizeof(truoc));
    }
}