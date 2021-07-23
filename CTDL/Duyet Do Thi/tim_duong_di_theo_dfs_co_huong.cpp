using namespace std;
#include<bits/stdc++.h>
vector <int> a[1000];
int n,k,bi,en,truoc[1000],chuaxet[1000];
void dfs(int s)
{
	stack<int> st;
	st.push(s);
	chuaxet[s]=1;
	while(!st.empty())
	{
		int u=st.top();
		st.pop();
		for(int v=0;v<a[u].size();v++)
		{
			if(!chuaxet[a[u][v]])
			{
				chuaxet[a[u][v]]=1;
				truoc[a[u][v]]=u;
				st.push(u);
				st.push(a[u][v]);
				break;
			}
		}
	}
}
void findPath()
{
	if(!truoc[en]) cout<<-1;
	else{
		stack <int> st;
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
        cin>>n>>k>>bi>>en;
        for(int i=0;i<k;i++)
        {
            int x,y;cin>>x>>y;
            a[x].push_back(y);
        }
        dfs(bi);
        findPath();
        cout<<endl;
        for(int i=1;i<=n;i++)
    	{
    		a[i].clear();
    		chuaxet[i]=0;
    		truoc[i]=0;
		}
    }
}
