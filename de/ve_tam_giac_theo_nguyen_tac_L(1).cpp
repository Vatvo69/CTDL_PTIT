using namespace std;
#include<iostream>
int main()
{
	int n,dem=0;cin>>n;
	char mt[100][100];
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			for(int j=i;j>=0;j--)
			{
				mt[i][j]=char(97+dem++);
			}
		}
		else{
			for(int j=0;j<=i;j++)
			{
				mt[i][j]=char(97+dem++);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mt[i][j]<<" ";
		}
		cout<<endl;
	}
}
