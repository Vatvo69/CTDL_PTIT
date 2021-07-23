using namespace std;
#include<iostream>
#include<string.h>
void xoa(char s[],int vtx)
{
	for(int i=vtx+1;i<strlen(s);i++)
	{
		s[i-1]=s[i];
	}
	s[strlen(s)-1]='\0';
}
int main()
{
	char s[100];gets(s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' '&&s[i+1]==' ')
		{
			xoa(s,i+1);
			i--;
			n--;
		}
	}
	puts(s);
}
