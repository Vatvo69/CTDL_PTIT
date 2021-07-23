using namespace std;
#include<iostream>
#include<string.h>
int main()
/*{
	char s[100],arr[30][100];
	gets(s);
	char *token;
	token=strtok(s," ");
	int j=0,dem=0;
	while(token!=NULL)
	{
		int dem1=0;
		for(int i=0;i<strlen(token);i++)
		{
			if((token[i]>=65&&token[i]<=90)||(token[i]>=48&&token[i]<=57))
			{
				dem1++;
			}
		}
		if(dem1==strlen(token))
		{
			strcpy(arr[dem],token);
			dem++;
		}
		j++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<dem;i++)
	{
		cout<<arr[i]<<" ";
	}
}
*/
{
	char s[100],s0[100],s1[30][100],s2[30][100];
	gets(s);
	strcpy(s0,s);
	char *token;
	token=strtok(s," ");
	int j=0;
	while(token!=NULL)
	{
		strcpy(s1[j],token);
		j++;
		token=strtok(NULL," ");
	}
	strupr(s0);
	j=0;
	token=strtok(s0," ");
	while(token!=NULL)
	{
		strcpy(s2[j],token);
		j++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<j;i++)
	{
		if(strcmp(s1[i],s2[i])==0)
		{
			cout<<s1[i]<<" ";
		}
	}
	
}
	
	
