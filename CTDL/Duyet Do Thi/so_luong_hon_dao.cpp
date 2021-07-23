using namespace std;
#include<bits/stdc++.h>
int n,k,chuaxet[1000],truoc[1000];
vector <int> a[1000];
bool bfs(int s)
{
	queue<int> qu;
	qu.push(s);
	chuaxet[s]=1;
	while(!qu.empty())
	{
		int u=qu.front();
		qu.pop();
		for(int v: a[u])
		{
			if(!chuaxet[v]) {
				qu.push(v);
				chuaxet[v]=1;
				truoc[v]=u;
			}
			else if(truoc[u]!=v) return true;
		}
	}
	return false;
}
bool solve()
{
	for(int i=1;i<=n;i++)
    {
		if(!chuaxet[i]&&bfs(i)) return true;
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
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
		cout<<endl;
		memset(chuaxet,0,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		for(int i=1;i<=n;i++) a[i].clear();
    }
}
