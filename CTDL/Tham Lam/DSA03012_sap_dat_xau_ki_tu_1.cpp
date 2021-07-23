#include<iostream>
#include<map>
using namespace std;
string s;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> s;
		map <char, int> un;
		for (int i = 0; i < s.size(); i++) un[s[i]]++;
		auto x = un.begin();
		int m = (*x).second;
		if (s.length() - m + 1 >= m) cout << 1;
		else cout << -1;
		cout << endl;
	}
}

