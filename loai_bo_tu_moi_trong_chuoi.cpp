using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char a[100][100],s[100],s1[100];
	gets(s);gets(s1);
	char *token;
	token=strtok(s," ");
	int dem=0;
	while(token!=NULL)
	{
		strcpy(a[dem++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<dem;i++)
	{
		if(strcmp(a[i],s1)!=0)
		{
			cout<<a[i]<<" ";
		}
	}
}
