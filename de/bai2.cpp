using namespace std;
#include<iostream>
#include<algorithm>
int kt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2) return 1;
	else return 0;
}
void tach(int n,int a[],int &dem)
{
	while(n>0)
	{
		a[dem++]=n%10;
		n=n/10;
	}
}
int main()
{
	int n,a[100],dem=0;cin>>n;
	tach(n,a,dem);
	reverse(a,a+dem);
	int count=1;
	for(int i=0;i<dem;i++)
	{
		for(int j=i+1;j<dem;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
				count++;
			}
		}
		if(kt(a[i])==1&&a[i]!=0)
		{
			cout<<a[i]<<" "<<count<<endl;
		}
		count=1;
	}
}
