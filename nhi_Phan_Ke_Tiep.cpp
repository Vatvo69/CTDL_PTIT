using namespace std;
#include<iostream>
int a[100]={0},ok=0,n;
void xuat(int k)
{
	for(int i=1;i<=k;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(int k)
{
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) ok=1;
	else
		a[i]++;
		for(int j=i+1;j<=k;j++)
			a[j]=a[j-1]+1;
}
int main()
{
	int k;cin>>k>>n;
	for(int i=1;i<=k;i++) cin>>a[i];
	while(!ok)
	{
		sinh(k);
		if(ok==1)
			break;
		else
			xuat(k);
	}
}
