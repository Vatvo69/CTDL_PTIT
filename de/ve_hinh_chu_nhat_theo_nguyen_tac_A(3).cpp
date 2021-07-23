using namespace std;
#include<iostream>
int main()
{
	int hang,cot;cin>>hang>>cot;
	for(int i=0;i<hang;i++)
	{
		int temp;
		if(hang>cot) temp=hang;
		else temp=cot;
		for(int j=0;j<cot;j++)
		{
			if(hang==cot)
			{
				if(i+j<cot-1)
			{
				cout<<temp--;
			}
			else cout<<temp;
			}
			else if(hang<cot)
			{
				if(i+j<hang-1)
				{
					cout<<temp--;
				}
				else cout<<temp;
			}
			else
			{
				if(i>=cot-1&&i+j>=hang-1)
				{cout<<temp;
				}else cout<<temp--;
			}
			
		}
		cout<<endl;
	}
}
