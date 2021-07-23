using namespace std;
#include <iostream>
#include <stack>
#include <cstring>
int a[1000][1000], v, e, n, start, chuaxet[1000];
void dfs(int start)
{
    cout << start << " ";
    stack<int> st;
    st.push(start);
    chuaxet[start] = 1;
    while (!st.empty())
    {
        int s = st.top();
        st.pop();
        for (int i = 1; i <= n; i++)
        {
            if (!chuaxet[i] && a[s][i])
            {
                cout << i << " ";
                st.push(s);
                st.push(i);
                chuaxet[i] = 1;
                break;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> v >> start;
        memset(chuaxet, 0, sizeof(n));
        memset(chuaxet, 0, sizeof(n));
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        dfs(start);
        cout << endl;
    }
}