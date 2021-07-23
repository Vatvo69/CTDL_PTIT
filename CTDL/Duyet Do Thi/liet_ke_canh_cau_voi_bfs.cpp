using namespace std;
#include<bits/stdc++.h>
int chuaxet[1000],check[1000],n,k;
vector <int> a[1000];
void bfs(int s)
{
	queue<int> qu;
	qu.push(s);
	chuaxet[s]=1;
	while(!qu.empty())
	{
		int u=qu.front();
		qu.pop();
		for(int j=0;j<a[u].size();j++)
		{
			int v=a[u][j];
			if(!chuaxet[v]&&(!check[u]||!check[v]))
			{
				qu.push(v);
				chuaxet[v]=1;
			}
		}
	}
}
void solve()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			int m=a[i][j];
			check[m]=1;check[i]=1;
			bfs(1);
			for(int k=1;k<=n;k++)
			{
				if(!chuaxet[k]&&i<m) {
					cout<<i<<" "<<m<<" ";
					break;
				}
			}
			memset(chuaxet,0,sizeof(chuaxet));
			check[m]=0;check[i]=0;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<k;i++)
		{
			int x,y;cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);		
		}
		solve();
		cout<<endl;
		memset(check,0,sizeof(check));
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=1;i<=n;i++) a[i].clear();
	}	
}
