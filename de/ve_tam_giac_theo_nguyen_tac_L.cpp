using namespace std;
#include<iostream>
int main()
{
	int n,mt[100][100],dem=1;cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<=i;j++)
			{
				mt[i][j]=dem++;
			}
		}
		else{
			for(int j=i;j>=0;j--)
			{
				mt[i][j]=dem++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mt[i][j]!=0)
			{
				cout<<mt[i][j]<<" ";	
			}
		}
		cout<<endl;
	}
}
