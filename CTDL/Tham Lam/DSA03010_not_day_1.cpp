using namespace std;
#include<bits/stdc++.h>
long long n,a[100],sum;
long long solve()
{
	priority_queue <long long,vector<long long>,greater<long long> > pq(a,a+n);
	while(pq.size()>1)
	{
		long long f=pq.top();pq.pop();
		long long s=pq.top();pq.pop();
		sum+=f+s;
		pq.push(f+s);
	}
	return sum;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<solve()<<endl;
		sum=0;	
	}
}
