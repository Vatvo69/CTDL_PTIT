#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,sum=0,a[200]={},res=-1e10;cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(sum<0) sum=0;
			res=max(sum,res);
		}
		cout<<res<<endl;
	}
}

