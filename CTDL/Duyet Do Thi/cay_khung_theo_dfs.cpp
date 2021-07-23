using namespace std;
#include<bits/stdc++.h>
int chuaxet[1000],n,k,u;
vector<int> a[1000];
void dfs()
{
	stack<int> st;
	st.push(u);
	chuaxet[u]=1;
	pair<int,int> res[1000];
	int dem=0;
	while(!st.empty())
	{
		int top=st.top();
		st.pop();
		for(int v:a[top])
		{
			if(!chuaxet[v])
			{
				chuaxet[v]=1;
				st.push(top);
				st.push(v);
				res[++dem].first=top;
				res[dem].second=v;
				break;
			}
		}
	}
	if(dem==n-1)
	{
		for(int i=1;i<=n-1;i++) cout<<res[i].first<<" "<<res[i].second<<endl;
	}
	else cout<<"-1"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k>>u;
		for(int i=0;i<k;i++)
		{
			int x,y;cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		dfs();
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=1;i<=n;i++) a[i].clear();
	}
}
