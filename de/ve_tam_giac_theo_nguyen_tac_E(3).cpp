using namespace std;
#include<iostream>
int main()
{
	int n;cin>>n;
	int dem=-1;
	int tam=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			dem+=2;
			if(dem<2*n)
			{
				cout<<dem;
			}
		}
		dem=1;
		dem=dem+tam;
		tam+=2;
		cout<<endl;
	}
}
