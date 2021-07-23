#include<iostream>
using namespace std;
#include<queue>
long long n,a[2000000],res,p=1000000007;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	priority_queue <long long ,vector<long long>,greater <long long>  > pq(a,a+n);
	while(pq.size()>1) {
		long long f=pq.top();pq.pop();
		long long s=pq.top();pq.pop();
		res+=(f+s)%p;
		pq.push((f+s)%p);
	}
	cout<<res<<endl;
	res=0;
	}
	
}

