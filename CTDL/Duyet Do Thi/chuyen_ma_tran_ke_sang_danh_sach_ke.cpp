#include<iostream>
using namespace std;
#include<vector>
int main()
{
	cin.tie(0);
	int n,a[1000]={};cin>>n;
	vector <int> v;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;cin>>x;
			if(x==1) v.push_back(j);
		}
		for(int z=0;z<v.size();z++)
			cout<<v[z]<<" ";
		v.clear();
		cout<<endl;
	}
	
}

