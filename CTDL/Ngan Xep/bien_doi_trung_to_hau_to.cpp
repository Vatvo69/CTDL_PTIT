#include <iostream>
using namespace std;
#include <stack>
int check(char x)
{
	if (x == '*' || x == '/')
		return 3;
	else if (x == '+' || x == '-')
		return 2;
	else if (x == '(')
		return 1;
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		stack<char> st;
		string postfix = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ')')
			{
				char topToken = st.top();
				while (topToken != '(')
				{
					postfix += topToken;
					topToken = st.top();
					st.pop();
				}
			}
			else if (check(s[i]) == 0)
				postfix += s[i];
			else if (s[i] == '(')
				st.push(s[i]);
			else
			{
				while (!st.empty() && check(st.top()) >= check(s[i]))
				{
					postfix += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		cout << postfix << endl;
	}
}
