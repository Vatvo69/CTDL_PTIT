#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>
#include<string>
int n,d;
int main()
{	
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>d;
		string s2="";
		n--;
		if(d==1&&n==0) cout<<0<<endl;
		else if(d*9<n) cout<<-1<<endl;
		else{
			for(int i=0;i<d-1;i++)
			{
				if(n>=9) {
					s2+='9';
					n-=9;
					}
				else{
					s2+=to_string(n);
					n=0;
				}
			}
			s2+=to_string(n+1);	
			cout<<string(s2.rbegin(),s2.rend())<<endl;
		}
	}
	
}

