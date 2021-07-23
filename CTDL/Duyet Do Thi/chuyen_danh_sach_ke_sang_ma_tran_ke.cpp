using namespace std;
#include<bits/stdc++.h>
int a[100][100];
int main()
{
	ios_base::sync_with_stdio(0);
 	cin.tie(0);
	string s;
	int n;cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++)
	{
		getline(cin,s);
		s+=' ';
		int so=0,j=0;
		while(j<s.size())
		{
			if(s[j]>='0'&&s[j]<='9') so=so*10+(int)(s[j]-'0');
			else if(so>0)
			{
				a[i][so]=1;
				a[so][i]=1;
				so=0;
			}
			j++;
		}
	}
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
			cout<<endl;
		}
}
