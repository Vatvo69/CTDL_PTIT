using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	gets(s1);gets(s2);
	char s[30][100];
	int j=0;
	strcpy(s[j++],s1);
	strcpy(s[j++],s2);
	for(int i=0;i<j;i++)
	{
		for(int k=i+1;k<j;k++)
		{
			if(strcmp(s[i],s[k])>0)
			{
				swap(s[i],s[k]);
			}
		}
	}
	for(int i=0;i<j;i++)
	{
		cout<<s[i]<<" ";
	}
}
