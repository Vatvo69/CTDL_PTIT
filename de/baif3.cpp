using namespace std;
#include<iostream>
int main()
{
	int hang,cot;cin>>hang>>cot;
	for(int i=0;i<hang;i++)
	{
		int temp;
		if(i>cot)
		{
			temp=cot-1;
		}
		else
		{
			temp=i-1;
		} 
		for(int j=0;j<cot;j++)
		{
			if(i+j<cot)
			{
				cout<<char(65+j+i);
			}
			else {
				
				cout<<char(65+temp--);			
			}
		}
		cout<<endl;
	}
}
