#include<iostream>
using namespace std;
int s,p,n,a[100000];
void sang()
{
	for(int i=3;i<100000;i++)
	{
		if(a[i]==0)
		{
			for(int j=i;j<100000;j+=i) a[j]=1;
		}
	}
}
int main()
{
	int t;cin>>t;
	sang();
	while(t--)
	{
		cin>>s>>p>>n;
		for(int i=0;i<10;i++) cout<<a[i];
	}
}

