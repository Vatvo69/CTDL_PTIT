#include<iostream>
using namespace std;
#include<algorithm>
int p=1000000007;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,a[1000]={};cin>>n>>k;
		a[0]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=min(i,k);j>0;j--)
			a[j]=a[j]+a[j-1];
		}
		cout<<a[k]<<endl;
	}
}

