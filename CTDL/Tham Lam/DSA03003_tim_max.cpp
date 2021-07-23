#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[100],p=1000000007,sum;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++) sum=(sum+a[i]*i)%p;
		cout<<sum<<endl;
		sum=0;
	}
}

