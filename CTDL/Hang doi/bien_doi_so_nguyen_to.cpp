// using namespace std;
// #include <iostream>
// #include <queue>
// #include <cstring>
// int s, e, isPrime[10000], count[10000];
// void sang()
// {
// 	for (int i = 2; i <= 9999; i++)
// 	{
// 		if (!isPrime[i])
// 		{
// 			for (int j = i * 2; j <= 9999; j += i)
// 				isPrime[j] = 1;
// 		}
// 	}
// }
// void solve()
// {
// 	if (s == e)
// 	{
// 		cout << 0;
// 		return;
// 	}
// 	queue<int> qu;
// 	qu.push(s);
// 	count[s] = 1;
// 	while (!qu.empty())
// 	{
// 		int top = qu.front();
// 		qu.pop();
// 		int m = 1;
// 		while (m <= 1000)
// 		{
// 			int thuong = top / (m * 10);
// 			int du = top % m;
// 			for (int i = 1; i <= 9; i++)
// 			{
// 				int v = thuong * m * 10 + i * m + du;
// 				if (!isPrime[v] && v > 1000 && !count[v])
// 				{
// 					count[v] = count[top] + 1;
// 					if (v == e)
// 					{
// 						cout << count[top];
// 						return;
// 					}
// 					qu.push(v);
// 				}
// 			}
// 			m *= 10;
// 		}
// 	}
// }
// int main()
// {
// 	int t;
// 	cin >> t;
// 	sang();
// 	while (t--)
// 	{

// 		cin >> s >> e;
// 		memset(count, 0, sizeof(count));
// 		solve();
// 		cout << endl;
// 	}
// }