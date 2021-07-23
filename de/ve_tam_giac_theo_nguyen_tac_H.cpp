using namespace std;
#include<iostream>
int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<(2*i)-1;j+=2)
		{
			cout<<j;
		}
		for(int j=(2*i)-1;j>=1;j-=2)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
