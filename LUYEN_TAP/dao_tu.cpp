using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t; cin >> t;
	while (t--)
	{
		
		string s; 
		char x;cin>>x;
		getline(cin, s);
		s=x+s;
		int pos = 0;
		string tmp = " ";
		stack<string> st;
		while ((pos = s.find(tmp)) != string::npos)
		{
			string token = s.substr(0, pos);
			st.push(token);
			s.erase(0, pos + 1);
		}
		st.push(s);
		while (!st.empty())
		{
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}
