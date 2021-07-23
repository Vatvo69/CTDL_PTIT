using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s[100],a[100][100];
	gets(s);
	char *token;
	int dem=0;
	token=strtok(s," ");
	while(token!=NULL)
	{
		strcpy(a[dem++],token);
		token=strtok(NULL," ");
	}
	int max=0,min=strlen(a[0]),vtmax=0,vtmin=0;
	for(int i=0;i<dem;i++)
	{
		if(strlen(a[i])>max)
		{
			max=strlen(a[i]);
			vtmax=i;	
		}
		if(strlen(a[i])<min)
		{
			min=strlen(a[i]);
			vtmin=i;
		}
	}
	cout<<a[vtmax]<<" "<<a[vtmin];
}
