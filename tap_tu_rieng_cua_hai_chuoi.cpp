/*using namespace std;
#include<iostream>
#include<string.h>
int dem(char a[30][100],char str[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(str,a[i])==0)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	char s1[100],s2[100],arr1[30][100],brr[30][100];
	gets(s1);gets(s2);
	char *token;
	token=strtok(s1," ");
	int j=0;
	while(token!=NULL)
	{
		strcpy(arr1[j],token);
		j++;
		token=strtok(NULL," ");
	}
	int n=j;
	char a1[30][100];
	strcpy(a1[0],arr1[0]);
	j=1;
	for(int i=1;i<n;i++)
	{
		if(dem(a1,arr1[i],j)==0)
		{
			strcpy(a1[j],arr1[i]);
			j++;
		}
	}
	for(int i=0;i<j;i++)
	{
		for(int k=i+1;k<j;k++)
		{
			if(strcmp(a1[i],a1[k])>0)
			{
				swap(a1[i],a1[k]);
			}
		}
	}
	n=j;
	j=0;
	token=strtok(s2," ");
	while(token!=NULL)
	{
		strcpy(brr[j],token);
		j++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++)
	{
		if(dem(brr,a1[i],j)==0)
		{
			cout<<a1[i]<<" ";
		}
	}
}
*/
using namespace std;
#include<iostream>
#include<string.h>
int lay(char s[],char arr[][100])
{
	char *token;
	token=strtok(s," ");
	int dem=0,c=0;
	while(token!=NULL)
	{
		for(int i=0;i<dem;i++)
		{
			if(strcmp(token,arr[i])==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			strcpy(arr[dem++],token);	
		}
		token=strtok(NULL," ");
		c=0;
	}
	return dem;
}
int main()
{
	char s1[100],s2[100],arr1[100][100],arr2[100][100],arr[100][100];
	int c=0,dem2=0;
	gets(s1);gets(s2);
	int dem=lay(s1,arr1);
	int dem1=lay(s2,arr2);
	for(int i=0;i<dem;i++)
	{
		for(int j=i+1;j<dem;j++)
		{
			if(strcmp(arr1[i],arr1[j])>0)
			{
				swap(arr1[i],arr1[j]);
			}
		}
	}
	for(int i=0;i<dem;i++)
	{
		for(int j=0;j<dem1;j++)
		{
			if(strcmp(arr1[i],arr2[j])==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			cout<<arr1[i]<<" ";
		}
		c=0;
	}
}
