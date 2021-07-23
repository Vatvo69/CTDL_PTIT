using namespace std;
#include<iostream>
int fibonaci(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else {
		return fibonaci(n-1)+fibonaci(n-2);
	}
}
int main()
{
	int n,arr[100],mt[100][100],dem=0;cin>>n;
	for(int i=0;i<n*n;i++)
	{
		arr[dem++]=fibonaci(i);
	}
	dem=0;
	int hang=0,cot=0,k=0,temp=n;
	while(dem<n*n)
	{
		for(int i=k;i<temp;i++) mt[k][i]=arr[dem++];
		for(int i=k+1;i<temp;i++) mt[i][temp-1]=arr[dem++];
		for(int i=temp-2;i>=k;i--) mt[temp-1][i]=arr[dem++];
		for(int i=temp-2;i>k;i--) mt[i][k]=arr[dem++];
		k++;temp--;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mt[i][j]<<" ";
		}
		cout<<endl;
	}
}
