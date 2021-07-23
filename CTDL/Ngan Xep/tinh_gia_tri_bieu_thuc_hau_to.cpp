#include<iostream>
using namespace std;
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
		stack<int> st;
		for (int i = 0; i < s.length(); i++)
		{
			if (check(s[i]))
			{
				int s2 = st.top(); st.pop();
				int s1 = st.top(); st.pop();
				int sum = 0;
				if (s[i] == '+') sum = s1 + s2;
				else if (s[i] == '-') sum = s1 - s2;
				else if (s[i] == '*') sum = s1 * s2;
				else sum = s1 / s2;
				st.push(sum);
			}
			else st.push(s[i] - '0');
		}
		cout << st.top() << endl;
	}
}

