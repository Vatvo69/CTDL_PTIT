#include<bits/stdc++.h>
using namespace std;
int n,k,bi,en,chuaxet[1000],truoc[1000];
vector<int> a[1000];
void bfs(int s)
{
	queue<int>qu;
	qu.push(s);
	chuaxet[s]=1;
	while(!qu.empty())
	{
		int u=qu.front();
		qu.pop();
		for(int v=0;v<a[u].size();v++)
		{
			if(!chuaxet[a[u][v]])
			{
				chuaxet[a[u][v]]=1;
				truoc[a[u][v]]=u;
				qu.push(a[u][v]);
			}
		}
	}
}
void check()
{
	if(!truoc[en]) cout<<"NO";
	else cout<<"YES";
}
void reset()
{
	for(int i=1;i<=n;i++)
	{
		chuaxet[i]=0;
		truoc[i]=0;
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
		int test;cin>>test;
		while(test--)
		{
			cin>>bi>>en;
			bfs(bi);
			check();
			cout<<endl;
			reset();
		}
		for(int i=1;i<=n;i++) a[i].clear();
		reset();
		
	}
}

