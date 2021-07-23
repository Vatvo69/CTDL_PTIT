using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s[100],arr[30][100];
	gets(s);
	strlwr(s);
	char *token;
	token=strtok(s," ");
	int j=0;
	while(token!=NULL)
	{
		token[0]-=32;
		strcpy(arr[j++],token);
		token=strtok(NULL," ");
	}
	strupr(arr[0]);
	for(int i=1;i<j-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<arr[j-1]<<", "<<arr[0];
}
