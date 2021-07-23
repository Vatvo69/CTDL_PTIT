#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100],k;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int s=0,s1=0;
		for(int i=0;i<n;i++) cin>>a[i],s+=a[i];
		sort(a,a+n,greater<int>());
		int m=max(k,n-k);
		for(int i=0;i<m;i++) s1+=a[i];
		cout<<2*s1-s<<endl;
 	}
}

