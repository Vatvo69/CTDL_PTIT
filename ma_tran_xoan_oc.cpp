using namespace std;
#include<iostream>
void xuat(int mt[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mt[i][j]<<" ";
		}
		cout<<endl;
	}
}
void tao(int mt[][100],int &m,int &n)
{
	int d=0,dem=m*n,i;
	int hang=m-1,cot=n-1;
	while(m*n>=dem){
		for(int i=d;i<=cot;i++)
	{
		mt[d][i]=dem--;
	}
	for(int i=d+1;i<=hang;i++)
	{
		mt[i][cot]=dem--;
	}
	for(int i=cot-1;i>=d&&dem<=m*n;i--)
	{
		mt[hang][i]=dem--;
	}
	for(int i=hang-1;i>d&&dem<=m*n;i--)
	{
		mt[i][d]=dem--;
	}
	d++;hang--;cot--;
	}
	
	xuat(mt,m,n);
}
int main()
{
	int mt[100][100],m,n;
	cin>>m>>n;	
	tao(mt,m,n);
}
