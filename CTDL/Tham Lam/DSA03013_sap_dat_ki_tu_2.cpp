using namespace std;
#include<bits/stdc++.h>
string s;
int d;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>d>>s;
		map <char,int> m;
		for(int i=0;i<s.size();i++) m[s[i]]++;
		auto x=m.begin();
		int res=(*x).second;
		if(res*d-1<=s.size()) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}
