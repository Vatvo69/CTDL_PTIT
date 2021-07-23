#include<iostream>
using namespace std;
#include<algorithm>
#include<stdlib.h>
int p=1000000007;
long long solve(long long n,long long k)
{
	if(k==0) return 1;
	else if(k==1) return n;
	if(k%2==0)
	{
		long long x=solve(n,k/2);
		return (x*x)%p;
	}
	else {
		long long x=solve(n,k-1);
		return (n*x)%p;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;cin>>n;
		string k=to_string(n);
		reverse(k.begin(),k.end());
		long long x=stoi(k);
		cout<<solve(n,x)<<endl;	
	}
}

