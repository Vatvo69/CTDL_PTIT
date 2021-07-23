using namespace std;
#include<iostream>
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int dem=n;
		for(int j=0;j<n;j++)
		{
			int a=-i+dem++;
			if(a<=n)
			{
				cout<<a;
			}

		}
		cout<<endl;
	}
}
