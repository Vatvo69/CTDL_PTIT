#include<iostream>
using namespace std;
int cheo1[100],cheo2[100],h[100],c[100],dem;
void sinh(int i,int n)
{
	for(int j=1;j<=n;j++)
	{
		if(h[j]==0&&c[j]==0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0)
		{
			h[j]=c[j]=cheo1[i-j+n]=cheo2[i+j-1]=1;
			if(i==n) dem++;
			else sinh(i+1,n);
			h[j]=c[j]=cheo1[i-j+n]=cheo2[i+j-1]=0;
		}
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		sinh(1,n);
		cout<<dem<<endl;
		dem=0;
	}

}

