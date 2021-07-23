#include<iostream>
using namespace std;
int a[1000000],n,k;
int solve(int l,int r)
{
	while(l<=r)
	{
		int m=l+(r-l)/2;
		if(a[m]==k) return m;
		else if(a[m]>k) return solve(l,m-1);
		else return solve(m+1,r);
	}
	return -1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		int x=solve(0,n);
		if(x==-1) cout<<"NO";
		else cout<<x+1;
		cout<<endl;
		
	}
}

