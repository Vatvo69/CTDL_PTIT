using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,a[n+10]={};
        for(int i=0;i<n;i++) cin>>a[i];
        int dem=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++) if(a[i]+a[j]==k) dem++;
        }
        cout<<dem<<endl;
    }
}