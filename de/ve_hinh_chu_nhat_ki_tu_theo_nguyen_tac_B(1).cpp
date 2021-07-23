using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	int hang,cot;cin>>hang>>cot;
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			int a=64+i+j;
			if(a<64+cot)
			{
				cout<<char(a);	
			}
			else cout<<char(64+cot-1);
		}
		cout<<endl;
	}
}
