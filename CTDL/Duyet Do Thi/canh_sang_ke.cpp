using namespace std;
#include<iostream>
#include<vector>
vector <int> v[1000];
int n, k;
void reset()
{
	for (int i = 1; i <= n; i++) v[i].clear();
}
void add(int a, int b)
{
	v[a].push_back(b);
	v[b].push_back(a);
}
void show()
{
	for (int i = 1; i <=n; i++)
	{
		cout << i << ": ";
		for (int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < k; i++)
		{
			int a, b; cin >> a >> b;
			add(a, b);
		}
		show();
		reset();
	}
}
