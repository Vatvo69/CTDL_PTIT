#include<bits/stdc++.h>
using namespace std;
int chuaxet[1000],truoc[1000],n,k,be,en;
vector <int> a[1000];
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
				truoc[a[u][v]]=u;
				chuaxet[a[u][v]]=1;
				qu.push(a[u][v]);
			}
		}
	}
}
void findPath()
{
	if(!truoc[en]) cout<<-1;
	else{
		stack<int>st;
		st.push(en);
		int u=truoc[en];
		while(u!=0)
		{
			st.push(u);
			u=truoc[u];
		}
		while(!st.empty())
		{
			cout<<st.top()<<" ";
			st.pop();
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k>>be>>en;
		for(int i=0;i<k;i++)
		{
			int x,y;cin>>x>>y;
			a[x].push_back(y);
		}
		bfs(be);
		findPath();
		for(int i=0;i<=n;i++)
		{
			a[i].clear();
			chuaxet[i]=0;
			truoc[i]=0;
		}
		cout<<endl;
	}
}

