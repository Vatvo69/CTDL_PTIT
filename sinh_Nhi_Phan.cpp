using namespace std;
#include<iostream>
int ok=0,a[100]={0};
void xuat(int n)
{
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(int n)
{
	int i=n;
	while(a[i])
	{
		a[i]=0;
		i--;	
	}
	if(i==0) ok=1;
	else
		a[i]=1;
}
int main()
{
	int n;cin>>n;
	xuat(n);
	while(!ok)
	{
		sinh(n);
		if(ok==1)
			break;
		else
			xuat(n);
	}
}
