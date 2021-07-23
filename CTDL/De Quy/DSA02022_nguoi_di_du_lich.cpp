#include<iostream>
#include<algorithm>
using namespace std;
int n,c[20][20],cmin=10e9,a[20],b[20],res,fopt=10e9;
void solve(int i)
{
	for(int j=2;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;b[j]=1;
			res=res+c[a[i-1]][a[i]];
			if(i==n) {
				fopt=min(fopt,c[a[i]][a[1]]);
			}
			else if(res+(n-i+1)*cmin<=fopt) solve(i+1);
			b[j]=0;res=res-c[a[i-1]][a[i]];
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) cin>>c[i][j];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) if(c[i][j]!=0) cmin=min(c[i][j],cmin);
	}
	cout<<fopt;
}

