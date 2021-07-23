using namespace std;
#include<iostream>
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int dem=i,count=1;
		for(int j=0;j<2*n-1;j++)
		{
			if(i+j<n-1)
			{
				cout<<"~";
			}
			
			else if(i+j>=n-1&&j<n)
			{
				cout<<dem--;
			}
			else if(count<=i)
			{
				cout<<count++;
			}
		}
		cout<<endl;
	}
}
