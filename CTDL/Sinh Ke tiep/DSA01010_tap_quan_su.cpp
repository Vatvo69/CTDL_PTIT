#include<iostream>
using namespace std;
#include<cstring>
int n,k,a[40],ok,b[40];
void xuat()
{
	int dem=0;
	if(ok==1) cout<<k<<endl;
	else{
	for(int i=1;i<=k;i++) {
		for(int j=1;j<=k;j++)
			if(a[i]==b[j]) dem++;
	}
	cout<<k-dem<<endl;	
	}
}
void sinh()
{
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) ok=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[i]-i+j;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>k;
		memset(a,0,40);
		memset(b,0,40);
		for(int i=1;i<=k;i++) cin>>a[i],b[i]=a[i];
		sinh();
		xuat();
		ok=0;
	}
}

