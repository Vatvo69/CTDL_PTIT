using namespace std;
#include<iostream>
#include<stack>
#include<string>
stack<int> st;
void xuat()
{
	stack <int> tmp = st;
	int a[1000] = {},dem=0;
	if (tmp.size() == 0)
	{
		cout << "empty" << endl;
	}
	else {
		while (!tmp.empty())
		{
			a[dem++] = tmp.top();
			tmp.pop();
		}
		for (int i = dem - 1; i >= 0; i--) cout << a[i] << " ";
		cout << endl;
	}
	
}
int main()
{
	string s;
	while (cin>>s)
		{
			if (s.compare("push")==0) {
				int x; cin >> x;
				st.push(x);
			}
			else if (s.compare("pop")==0)
			{
				st.pop();
			}
			else xuat();
		}
}
