using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a[100000]={},m,n,k;cin>>m>>n>>k;
        for(int i=0;i<n+m;i++) cin>>a[i];
        sort(a,a+m+n);
        cout<<a[k-1]<<endl;
    }
}
