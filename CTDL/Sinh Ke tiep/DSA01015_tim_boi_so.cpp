using namespace std;
#include<iostream>
#include<string>
#include<queue>
#include<sstream>
int n;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		queue <string> q;
		q.push("9");
		while (!q.empty())
		{
			string x = q.front();
			long long num = 0;
			for (int i = 0; i < x.length(); i++)
				num = num * 10 + x[i] - '0';
			q.pop();
			if (num % n == 0)
			{
				cout << x << endl;
				break;
			}
			q.push(x + "0");
			q.push(x + "9");
		}

	}
}
