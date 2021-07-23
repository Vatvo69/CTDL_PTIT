#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
vector <string> res;
void find(int a[][20],int i,int j,string path,int n)
{	
	if(i<0||j<0||i==n||j==n||a[i][j]==0) return;
	if(i==n-1&&j==n-1) {
		res.push_back(path);
		return;
	}
	a[i][j]=0;
	find(a,i+1,j,path+"D",n);
	find(a,i,j+1,path+"R",n);
	a[i][j]=1;
}
void solve(int a[][20],int n)
{
	find(a,0,0,"",n);
	sort(res.begin(),res.end());
	if(res.size()==0) cout<<"-1"<<endl;
	for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
	cout<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[20][20]={},n;cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		solve(a,n);
		res.clear();
	}
}

