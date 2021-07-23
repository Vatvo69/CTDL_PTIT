using namespace std;
#include<iostream>
#include<math.h>
int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*int(pow(10,i)/9)<<endl;
	}
}
