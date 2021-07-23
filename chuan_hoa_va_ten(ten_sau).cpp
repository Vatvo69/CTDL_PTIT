using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s[100],arr[100][100];
	gets(s);
	strlwr(s);
	char *token;
	token=strtok(s," ");
	int dem=0;
	while(token!=NULL)
	{
		token[0]-=32;
		strcpy(arr[dem++],token);
		token=strtok(NULL," ");
	}
	strupr(arr[dem-1]);
	for(int i=0;i<dem-2;i++)
	{
		
		cout<<arr[i]<<" ";
	}
	cout<<arr[dem-2]<<", "<<arr[dem-1];
}
