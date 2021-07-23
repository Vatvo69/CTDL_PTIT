using namespace std;
#include<iostream>
#include<map>
#include<queue>
int n, a[1000];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> n >> s;
		map <char, int> m;
		for (int i = 0; i < s.size(); i++) m[s[i]]++;
		int dem = 0;
		for (auto i : m) a[dem++] = i.second;
		priority_queue <int> pq(a, a + dem);
		while (n--)
		{
			int f = pq.top(); pq.pop();
			f--;
			pq.push(f);
		}
		int sum = 0;
		while (!pq.empty())
		{
			sum += pow(pq.top(), 2);
			pq.pop();
		}
		cout << sum << endl;
	}
}
