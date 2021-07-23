#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>
#define pii pair<pair<int, int>, pair<int, int>>
#define fi first
#define se second
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int visited[105][105];
int N, K, M;
vector<ii> v;
set<pair<ii, ii>> mySet;
bool inSide(int x, int y)
{
    return (x >= 1 && x <= N && y >= 1 && y <= N);
}
void BFS(ii u)
{
    queue<ii> q;
    q.push(u);
    visited[u.fi][u.se] = 1;
    while (!q.empty())
    {
        ii t = q.front();
        int u = t.fi;
        int v = t.se;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = u + dx[i];
            int y = v + dy[i];
            if (inSide(x, y) && mySet.find(pii(t, ii(x, y))) == mySet.end() && visited[x][y] == 0)
            {
                visited[x][y] = 1;
                q.push(ii(x, y));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> K >> M;
    for (int i = 1; i <= M; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        mySet.insert(pii(ii(a, b), ii(c, d)));
        mySet.insert(pii(ii(c, d), ii(a, b)));
    }
    for (int i = 1; i <= K; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(ii(x, y));
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        memset(visited, 0, sizeof(visited));
        BFS(v[i]);
        for (int j = 0; j < v.size(); j++)
        {
            if (visited[v[j].fi][v[j].se] == 0)
                ans++;
        }
    }
    cout << ans / 2;
}