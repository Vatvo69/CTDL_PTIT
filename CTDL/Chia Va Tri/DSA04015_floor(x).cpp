#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n,x,a[10000],res=-1e10,ok=0;cin>>n>>x;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(long long i=1;i<=n;i++)
		{
			if(a[i]<=x)
			{
				ok=1;
				res=max(res,i);
			}
			else break;
		}
		if(ok==1) cout<<res;
		else cout<<-1;
		cout<<endl;
	}
}

