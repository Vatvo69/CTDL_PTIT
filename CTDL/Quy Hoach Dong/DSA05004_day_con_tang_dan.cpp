#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[1000]={},b[1000]={},n;cin>>n;
		for(int i=0;i<n;i++) cin>>a[i],b[i]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j]) b[i]=max(b[j+1],b[i]);
			}
		}
		cout<<b[n-1]<<endl;
	}
}

