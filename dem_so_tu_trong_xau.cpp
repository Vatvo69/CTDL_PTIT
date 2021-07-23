using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char s[100],arr[30][100];gets(s);
	char *token;
	token=strtok(s," ");
	int dem=0;
	while(token!=NULL)
	{
		strcpy(arr,token);
		token=strtok(NULL," ");
		dem++;
	}
	cout<<dem;
}
