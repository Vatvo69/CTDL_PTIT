using namespace std;
#include<iostream>
#include<stack>
int check(char x)
{
	if (x == '+' || x == '-' || x == '*' || x == '/') return 1;
	return 0;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		stack <string> st;
		for(int i=0;i<s.length();i++)
		{
			if (check(s[i]))
			{
				string s1 = st.top(); st.pop();
				string s2 = st.top(); st.pop();
				string ch = '(' + s2 + s[i] + s1 + ')';
				st.push(ch);
			}
			else st.push(string(1, s[i]));
		}
		cout << st.top() << endl;
	}
}
