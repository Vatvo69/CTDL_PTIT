using namespace std;
#include<iostream>
#include<string.h>
#include<string>
int b[20];
void xuat(int a[],int n,string s)
{
	for(int i=1;i<=n;i++) cout<<s[a[i]-1];
	cout<<" ";
}
void sinh(int a[],int n,int i,string s)
{
	for(int j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;
			b[j]=1;
			if(i==n) xuat(a,n,s);
			sinh(a,n,i+1,s);
			b[j]=0;
		}
	}
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.length(),a[20]={};
        for(int i=1;i<=n;i++) a[i]=i;
        sinh(a,n,1,s);
        cout<<endl;
    }
}
