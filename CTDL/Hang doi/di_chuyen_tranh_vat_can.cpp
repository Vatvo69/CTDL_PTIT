using namespace std;
#include <iostream>
#include <queue>
bool chuaxet[200][200];
int a[200][200];
struct pack
{
    int i, j, d;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[100][100];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    a[i][j] = 1;
            }
        }
        int p, q, p1, q1;
        cin >> p >> q >> p1 >> q1;
        p++, q++, p1++, q1++;
        queue<pack> qu;
        qu.push({p, q, 0});
        chuaxet[p][q] = true;
        while (!qu.empty())
        {
            pack u = qu.front();
            qu.pop();
            int i = u.i, j = u.j;
            for (int k = 1; k + j <= n; k++)
            {
                if (!a[i][j + k])
                {
                    int i1 = i, j1 = j + k;
                    if (!chuaxet[i1][j1])
                    {
                        chuaxet[i1][j1] = true;
                        qu.push({i1, j1, u.d + 1});
                        if (i1 == p1 && j1 == q1)
                        {
                            cout << u.d + 1 << endl;
                            return 0;
                        }
                    }
                }
                else
                    break;
            }
            for (int k = 1; j - k >= 1; k++)
            {
                if (!a[i][j - k])
                {
                    int i1 = i, j1 = j - k;
                    if (!chuaxet[i1][j1])
                    {
                        chuaxet[i1][j1] = true;
                        qu.push({i1, j1, u.d + 1});
                        if (i1 == p1 && j1 == q1)
                        {
                            cout << u.d + 1 << endl;
                            return 0;
                        }
                    }
                }
                else
                    return 0;
            }
            //di len
            for (int k = 1; i - k >= 1 && j <= n; k++)
            {
                if (!a[i - k][j])
                {
                    int i1 = i - k, j1 = j;
                    if (!chuaxet[i1][j1])
                    {
                        qu.push({i1, j1, u.d + 1});
                        chuaxet[i1][j1] = true;
                        if (i1 == p1 && j1 == q1)
                        {
                            cout << u.d + 1 << endl;
                            return 0;
                        }
                    }
                }
                else
                    return 0;
            }
            //di xuong
            for (int k = 1; i + k <= n; k++)
            {
                if (!a[i + k][j])
                {
                    int i1 = i + k, j1 = j;
                    if (!chuaxet[i1][j1])
                    {
                        qu.push({i1, j1, u.d + 1});
                        chuaxet[i1][j1] = true;
                        if (i1 == p1 && j1 == q1)
                        {
                            cout << u.d + 1 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
}