/*
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
 
const int maxn =1e5+100;
 
ll n;
ll ans=1e18;
ll num[]={0,2,3,5,7,11,13,17,19,23,29};
 
void fin(ll v,ll nn,ll p)
{
	if(nn>n)
	{
		return ;	
	}
	if(nn==n)
	{
		if(v<ans)
			ans=v;
		return ;
	}
	for(int i=1;i<=64;i++)
	{
		v*=num[p];
		if(v>=ans) break;
		if(nn<n)
		{
			fin(v,nn*(i+1),p+1);
		}
	}
}
int main()
{
	scanf("%lld",&n);
	if(n==1)
	{
		printf("1\n");
		return 0;
	}
	fin(1ll,1ll,1ll);
	printf("%lld\n",ans);
	return 0;
}*/
using namespace std;
#include<iostream>
#include<math.h>
long long n,p[10]={0,2,3,5,7,11,13,17,23,29},res=1e20;
void solve(long long n,long long i,long long x)
{
	if(n==1) {
		res=min(res,x);
	}
	for(int j=2;j<=n;j++)
	{
		if(n%j==0)
		{
			long long y=pow(p[i],j-1);
			x*=y;
			solve(n/j,i+1,x);
			x/=y;
		}
	}
}
int main()
{
	cin>>n;
	solve(n,1,1);
	cout<<res<<endl;
}
