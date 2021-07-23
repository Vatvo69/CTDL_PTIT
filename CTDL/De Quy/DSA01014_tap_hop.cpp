using namespace std;
#include<iostream>
int n,k,s,dem;
void solve(int i,int k,int sum)
{
	if(sum>s||k<0) return;
	if(k==0)
	{
		if(sum==s) dem++;
	}
	else{
		for(int j=i+1;j<=n;j++) solve(j,k-1,sum+j);
	}
}
int main()
{
	while(true)
	{
		int sum;cin>>n>>k>>s;
		if(n==0&&k==0&&s==0) break;
		solve(0,k,0);
		cout<<dem<<endl;
		dem=0;
	}
}
