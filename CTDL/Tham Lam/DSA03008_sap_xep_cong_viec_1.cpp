#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int n,a[1000],b[1000];
vector < pair <int,int> > res;
bool test(const pair <int,int>&a,const pair <int,int>&b)
{
	return a.second<b.second;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++) res.push_back({a[i],b[i]});
		sort(res.begin(),res.end(),test);
		int dem=1,j=0;
		for(int i=1;i<n;i++)
		{
			if(res[i].first>=res[j].second)
			{
				dem++;
				j=i;
			}
		}
		cout<<dem<<endl;
		res.clear();
	}
}
