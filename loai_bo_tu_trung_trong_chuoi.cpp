using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s[100],a[100][100];
	gets(s);
	char *token;
	token=strtok(s," ");
	strcpy(a[0],token);
	int dem=1;
	while(token!=NULL)
	{
		token=strtok(NULL," ");
		int dem1=1,dem2=0;
		while(dem1<dem)
		{
			if(strcmp(a[dem1++],token)==0)
			{
				dem2++;
			}
		}
		if(dem2!=0)
		{
		strcpy(a[dem++],token);
		}
		dem2=0;
	}
	for(int i=0;i<dem;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
}
