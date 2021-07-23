#include<iostream>
using namespace std;
int n,a[1000],ok;
void xuat()
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void sinh()
{
	int i=n-1;
	while(a[i]>a[i+1]) i--;
	if(i==0) ok=1;
	else{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r) swap(a[l++],a[r--]);
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		string s;cin>>s;
		for(int i=1;i<=n;i++) a[i]=s[i]-'0';
		sinh();
		xuat();
	}
}

