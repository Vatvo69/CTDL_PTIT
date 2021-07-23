using namespace std;
#include<bits/stdc++.h>
int n,k,chuaxet[1000],ok,truoc[1000];
vector<int> a[1000];
bool dfs(int u)
{
	chuaxet[u]=1;
	for(int v:a[u])
	{
		if(chuaxet[v]==0) {
			dfs(v);
		}
		else if(chuaxet[v]==1)
		{
			ok=1;
			return true;
		}
	}
	chuaxet[u]=2;
	return false;
}
void solve()
{
	ok=0;
	for(int i=1;i<=n;i++)
	{
		if(chuaxet[i]==0&&dfs(i)) break;
	}
	if(ok) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
			//a[y].push_back(x);
		}
		solve();
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=1;i<=n;i++) a[i].clear();
		
	}
}
