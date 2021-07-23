using namespace std;
#include<iostream>
void nhap(int mt[][100],int hang,int cot)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			cin>>mt[i][j];
		}
	}
}
void tich(int mt1[][100],int mt2[][100],int mt3[][100],int m,int n,int k)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<k;j++)
		{
			for(int l=0;l<n;l++)
			{
				mt3[i][j]+=mt1[i][l]+mt2[l][j];		
			}
		}
	}
}
int main()
{
	int hang,cot,mt1[100][100],mt2[100][100],mt3[100][100];cin>>hang>>cot;
	nhap(mt1,hang,cot);
	nhap(mt2,cot,hang);
	tich(mt1,mt2,mt3,hang,cot,hang);
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			cout<<mt3[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
