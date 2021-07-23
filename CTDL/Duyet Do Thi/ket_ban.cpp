#include<bits/stdc++.h>
using namespace std;
int n,k,chuaxet[1000];
vector <int> a[1000];
int dfs(int s)
{
	int ans=1;
	stack <int> st;
	st.push(s);
	chuaxet[s]=1;
	while(!st.empty())
	{
		int u=st.top();
		st.pop();
		for(int v:a[u])
		{
			if(!chuaxet[v])
			{
				chuaxet[v]=1;
				ans++;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
	return ans;
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
		int res=0;
		for(int i=1;i<=n;i++)
		{
			if(!chuaxet[i]) res=max(res,dfs(i));
		}
		cout<<res<<endl;
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=1;i<=n;i++) a[i].clear();
	}
}

