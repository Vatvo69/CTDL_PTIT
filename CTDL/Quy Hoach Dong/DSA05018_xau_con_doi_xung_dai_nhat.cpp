using namespace std;
#include<iostream>
#include<string.h>
#include<algorithm>
int main()
{
    int t;cin>>t;
	while(t>0)
	{
		string s;cin>>s;
		int a[1010][1010]={ },max1=1;
		int n=s.length();
		for(int i=0;i<n;i++)
			{
				a[i][i]=1;
				a[i+1][i]=1;
			}
		for(int k=2;k<=n;k++)
		{
			for(int i=0;i<=n-k;i++)
			{
				int j=i+k-1;
				if(a[i+1][j-1]==1&&s[i]==s[j])	
					{
						a[i][j]=1;
						max1=max(max1,k);
					}
			}
		}
		cout<<max1<<endl;
		t--;
	}
}