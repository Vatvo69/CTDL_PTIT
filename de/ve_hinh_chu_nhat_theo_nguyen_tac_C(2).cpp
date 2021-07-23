using namespace std;
#include<iostream>
int main()
{
	int hang,cot,dem=1,tam=0;cin>>hang>>cot;
	for(int i=0;i<hang;i++)
	{
		int a=i;
		int temp=cot-1;
		for(int j=0;j<cot;j++)
		{
			if(i<cot)
			{
				if(i+j<cot)
			{
				cout<<dem++;
			}
			else cout<<temp--;	
			}
			else{
				cout<<1+a--;
			}
			
		}
		dem=1;
			tam++;
		dem=dem+tam;
		cout<<endl;
	}
}
