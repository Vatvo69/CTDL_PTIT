#include<iostream>
using namespace std;
#include<string>
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[100]={};
		string bin="",gray="";cin>>gray;
		bin=gray[0];
		for(int i=0;i<gray.length()-1;i++)
		{
			if(bin[i]==gray[i+1]) bin+='0';
			else bin+='1';
		}
		cout<<bin<<endl;
		
	}
}

