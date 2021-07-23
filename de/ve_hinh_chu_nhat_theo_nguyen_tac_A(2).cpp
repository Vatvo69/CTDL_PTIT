using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	int hang,cot;cin>>hang>>cot;
	for(int i=0;i<hang;i++)
	{
		int temp,tam=i;
		if(cot>hang)
		{
			temp=cot;
		}
		else 
		{
			temp=hang;
		}
		
		for(int j=0;j<cot;j++)
		{
			if(i+j<cot-1)
			{
				cout<<temp-i;
			}
			else{
				if(i>=cot)
				{
					tam=cot-1;
				}
				int a=-tam+temp++;
				cout<<a;
			}
		}
		cout<<endl;
	}
}
