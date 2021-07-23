#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1000000],b[1000000],sum;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;i++) sum+=a[i]*b[i];
		cout<<sum<<endl;
		sum=0;
	}
}

