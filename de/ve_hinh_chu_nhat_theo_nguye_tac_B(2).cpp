using namespace std;
#include<iostream>
int main()
{
	int hang,cot;cin>>hang>>cot;
	
	for(int i=0;i<hang;i++)
	{
		int dem=i;
		for(int j=0;j<cot;j++)
		{
			if(i+cot<=hang)
			{
				cout<<cot;
			}
			else {
				int a=hang-dem--;
				if(a<cot)
				{
					cout<<a;	
				}
				else {
					cout<<cot;
				}
			}
		}
		cout<<endl;
		
	}
}
