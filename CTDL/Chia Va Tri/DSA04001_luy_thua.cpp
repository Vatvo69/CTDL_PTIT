using namespace std;
#include<iostream>
int p=1000000007;
long long solve(long long a,long long b)
{
	if(b==0) return 1;
	else if(b==1) return a;
	if(b%2==0)
	{
		long long x=solve(a,b/2);
		return (x*x)%p;
	}
	else{
		long long x=solve(a,b-1);
		return (a*x)%p;
	}
}
int main(){
	int t;cin>>t;
	while(t--)
	{
		long long a,b;cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
}
