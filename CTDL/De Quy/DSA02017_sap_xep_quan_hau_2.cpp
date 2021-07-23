using namespace std;
#include<iostream>
#include<vector>
int h[20],c[20],cheo1[20],cheo2[20],sum1;
vector <int> res;
void solve(int a[][100],int i)
{
	for(int j=1;j<=8;j++)
	{
		if(h[j]==0&&c[j]==0&&cheo1[i-j+8]==0&&cheo2[i+j-1]==0)
		{
			res.push_back(a[i][j]);
			h[j]=c[j]=cheo1[j]=cheo2[j]=1;
			if(i==8) {
				int sum=0;
				for(int i=0;i<8;i++) sum+=res[i];
				if(sum>sum1) sum1=sum;
			}
			else {
			solve(a,i+1);
			}
			res.pop_back();
			h[j]=c[j]=cheo1[i-j+8]=cheo2[i+j-1]=0;
			
		}	
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[100][100]={};
		for(int i=1;i<=8;i++)
		{
			for(int j=1;j<=8;j++) cin>>a[i][j];
		}
		solve(a,1);
		cout<<sum1<<endl;
		res.clear();
		sum1=0;
	}
}
