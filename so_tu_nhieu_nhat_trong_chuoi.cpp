using namespace std;
#include<iostream>
#include<string.h>
int count(char arr[100][100],char str[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(arr[i],str)==0)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	char s[100],arr[100][100],brr[100][100];
	gets(s);
	strlwr(s);
	char *token;
	token=strtok(s," ");
	int dem=0;
	while(token!=NULL)
	{	
		strcpy(arr[dem++],token);
		token=strtok(NULL," ");
	}	
	int n=dem;
	dem=1;
	strcpy(brr[0],arr[0]);
	for(int i=1;i<n;i++)
	{
		if(count(brr,arr[i],dem)==0)
		{
			strcpy(brr[dem++],arr[i]);
		}
	}
	int a[100];
	for(int i=0;i<n;i++)
	{
		a[i]=count(arr,brr[i],n);
	}
	for(int i=0;i<dem;i++)
	{
		cout<<brr[i]<<" "<<a[i]<<endl;
	}
}
