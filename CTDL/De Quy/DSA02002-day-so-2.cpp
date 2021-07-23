using namespace std;
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
vector <string> res;
void in(int arr[],int n)
{
	string s="[";
	for(int i=0;i<n-1;i++) s=s+to_string(arr[i])+" ";
	s=s+to_string(arr[n-1])+"] ";
	res.push_back(s);
}
void solve(int arr[],int i)
{
	for(int j=0;j<i;j++) arr[j]+=arr[j+1];
	if(i==1) return;
	in(arr,i-1);
	solve(arr,i-1);
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int arr[100],n;cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		in(arr,n);
		solve(arr,n);
		for(int i=res.size()-1;i>=0;i--) cout<<res[i];
		cout<<endl;
		res.clear();
	}
}
