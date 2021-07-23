#include<iostream>
using namespace std;
#include<queue>
long long toNum(string s)
{
	long long sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum=sum*10+(s[i]-'0');
	}
	return sum;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n,dem=0;cin>>n;
		queue<string> qu;
		qu.push("1");
		while(!qu.empty())
		{
			string top=qu.front(),top1=top;
			qu.pop();
			if(toNum(top)>n)
			{
				cout<<dem<<endl;
				break;
			}
			dem++;
			qu.push(top+'0');
			qu.push(top1+'1');
		}
	}
}

