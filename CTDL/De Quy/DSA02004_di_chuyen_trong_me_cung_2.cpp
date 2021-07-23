using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
vector <string> res;
void find(int a[][20],int n,int i,int j,string path)
{
    if(i<0||j<0||n==i||n==j||a[i][j]==0) return;
    if(i==n-1&&j==n-1) {
        res.push_back(path);
        return;
    }
    a[i][j]=0;
    find(a,n,i+1,j,path+"D");
    find(a,n,i-1,j,path+"U");
    find(a,n,i,j+1,path+"R");
    find(a,n,i,j-1,path+"L");
    a[i][j]=1;
}
void solve(int a[][20],int n)
{
	find(a,n,0,0,"");
	if(res.size()==0) cout<<"-1";
	else{
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++) cout<<res[i]<<" ";	
	}
	cout<<endl;
	
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a[20][20];cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        solve(a,n);
        res.clear();
    }
}
