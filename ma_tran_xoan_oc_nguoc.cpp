using namespace std;
#include<iostream>
void xuat(int mt[][100],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mt[i][j]<<" ";
		}
		cout<<endl;
	}
}
void nguoc(int mt[][100],int n)
{
	int d,dem=n*n;	n=n-1;
	while(dem>0)
	{
		for(int i=d;i<=n;i++)
		{
			mt[d][i]=dem--;
		}
		for(int i=d+1;i<=n;i++)
		{
			mt[i][n]=dem--;
		}
		for(int i=n-1;i>=d&&dem>0;i--)
		{
			mt[n][i]=dem--;
		}
		for(int i=n-1;i>d&&dem>0;i--)
		{
			mt[i][d]=dem--;
		}
		d++;n--;
	}
}
int main()
{
	int n,mt[100][100];cin>>n;
	nguoc(mt,n);
	xuat(mt,n);
}
