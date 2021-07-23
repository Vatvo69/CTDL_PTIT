#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s1,s2;cin>>s1>>s2;
		long long sum1=0,sum2=0;
		int dem=0;
		for(int i=s1.size()-1;i>=0;i--) {
			if(s1[i]=='1') {
				long long x=pow(2,dem);
				sum1+=x;
				}
			dem++;
		}
		dem=0;
		for(int i=s2.size()-1;i>=0;i--)
		{
			if(s2[i]=='1') {
				long long x=pow(2,dem);
				sum2+=x;
			}
			dem++;
		}
		cout<<sum1*sum2<<endl;
	}

}

