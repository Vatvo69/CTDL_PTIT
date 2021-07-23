#include<bits/stdc++.h>
using namespace std;
int ok;
void xuat(vector <int> res)
{
	ok=1;
	cout<<"[";
	for(int i=0;i<res.size()-1;i++) cout<<res[i]<<" ";
	cout<<res[res.size()-1]<<"] ";
}
void solve(int a[],int n,int sum_ans,int i,int sum,vector <int> res)
{
	if(sum==sum_ans) xuat(res);
	for(int j=i;j<n;j++)
	{
		if(sum+a[j]>sum_ans) return;
		sum+=a[j];
		res.push_back(a[j]);
		solve(a,n,sum_ans,j+1,sum,res);
		sum-=a[j];
		res.pop_back();
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		vector <int> res;
		int a[200],n,sum;cin>>n>>sum;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		solve(a,n,sum,0,0,res);
		if(ok==0) cout<<"-1";
		cout<<endl;
		ok=0;
		res.clear();
	}
}
