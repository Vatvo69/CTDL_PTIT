using namespace std;
#include<iostream>
#include<math.h>
int kt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2) return 1;else return 0;
}
int so(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(kt(i)==1&&n%i==0&&n%(i*i)==0)
		{
			return 1;
		}
	}
}
int main()
{
	int a,b;cin>>a>>b;
	for(int i=a;i<b;i++)
	{
		if(so(i)==1)
		{
			cout<<i<<" ";
		}
	}
}
