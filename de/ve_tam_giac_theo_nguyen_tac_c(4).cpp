using namespace std;
#include<iostream>
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int dem=1;
		for(int j=0;j<n;j++)
		{
			if(j<i)
			{
				cout<<"~";
			}
			else {
				cout<<dem++;
			}
		}
		cout<<endl;
	}
}
