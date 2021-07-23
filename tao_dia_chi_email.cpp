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
		strcpy(arr[j++],token);
		token=strtok(NULL," ");	
	}	
	char brr[100];
	for(int i=0;i<j-1;i++)
	{
		brr[i]=arr[i][0];
	}
	cout<<arr[j-1];
	for(int i=0;i<j-1;i++)
	{
		cout<<brr[i];
	}
	cout<<"@ptit.edu.vn";
}
