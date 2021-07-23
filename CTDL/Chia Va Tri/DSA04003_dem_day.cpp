#include<iostream>
using namespace std;
int mod=123456789;
long long solve(long long n,long long k)
{
	if(k==0) return 1;
	else if(k==1) return n;
	if(k%2==0) return solve(n*n%mod,k/2);
	else return n*solve(n*n%mod,k/2)%mod;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;cin>>n;
		cout<<solve(2,n-1)<<endl;
	}
}

