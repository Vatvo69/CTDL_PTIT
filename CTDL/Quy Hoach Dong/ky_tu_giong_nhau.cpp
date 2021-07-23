using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int dp[1000]={};
        int n,insert,del,copy;cin>>n>>insert>>del>>copy;
        dp[1]=insert;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0) dp[i]=min(dp[i-1]+insert,dp[i/2]+copy);
            else dp[i]=min(dp[i-1]+insert,dp[(i+1)/2]+copy+insert);
        }
        cout<<dp[n]<<endl;
    }
}