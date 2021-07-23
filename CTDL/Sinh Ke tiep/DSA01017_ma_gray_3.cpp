using namespace std;
#include<iostream>
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string bin;cin>>bin;
        cout<<bin[0];
        for(int i=1;i<bin.length();i++) cout<<((bin[i]-'0')^(bin[i-1]-'0'));
        cout<<endl;
    }
}
