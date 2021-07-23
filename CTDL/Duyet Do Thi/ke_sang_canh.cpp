#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n;
vector <int> v[1000];
int main()
{
	cin >> n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		string x; cin >> x;
		string s; getline(cin, s);
		s = x + s;
		int sum = s[0]-'0';
		for (int j = 1; j < s.length(); j++)
		{
			if (s[j] != ' ') {
				sum = sum * 10 + s[j] - '0';
			}
			else {
				v[i].push_back(sum);
				sum = 0;
			}
		}
		v[i].push_back(sum);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			if (v[i][j] > i)
			{
				cout << i << " " << v[i][j] << " ";
				cout << endl;
			}
		}
	
	}
}

