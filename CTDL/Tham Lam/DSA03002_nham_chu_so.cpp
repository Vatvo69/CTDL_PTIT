#include<bits/stdc++.h>
using namespace std;
string a,b,amin,bmin,amax,bmax;
int main()
{
	cin>>a>>b;
	amin=amax=a;bmin=bmax=b;
	for(int i=0;i<amin.length();i++) if(amin[i]=='6') amin[i]='5';
	for(int i=0;i<bmin.length();i++) if(bmin[i]=='6') bmin[i]='5';
	for(int i=0;i<amax.length();i++) if(amax[i]=='5') amax[i]='6';
	for(int i=0;i<bmax.length();i++) if(bmax[i]=='5') bmax[i]='6';
	cout<<stoi(amin)+stoi(bmin)<<" "<<stoi(amax)+stoi(bmax)<<endl;
}

