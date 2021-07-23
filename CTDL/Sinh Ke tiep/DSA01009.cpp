using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
int a[100], n,ok,k;
string s = "";
vector <string> res;

void xuat() {
	string s1 = "";
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) s1 += 'A';
		else s1 += 'B';
	}
	if (a[1] == 1) res.push_back(s + s1);
	if (a[n] == 1) res.push_back(s1 + s);
	for (int i = 0; i < n; i++)
	{
		string flag = "";
		if (s1[i] == 'B' && s1[i + 1] == 'B')
		{
			for (int j = 0; j <= i; j++) flag += s1[j];
			flag += s;
			for (int j = i+1; j < n; j++) flag += s1[j];
			res.push_back(flag);
		}
	}
}
void sinh()
{
	int i = n;
	while (a[i] == 1) i--;
	if (i == 0) ok = 1;
	else {
		a[i] = 1;
		for (int j = i + 1; j <= n; j++) a[j] = 0;
	}

}
int main()
{
		cin >> n >> k;
		n = n - k;
		for (int i = 0; i < k; i++) s += 'A';
		while (!ok)
		{
			xuat();
			sinh();
		}
		sort(res.begin(), res.end());
		cout << res.size() << endl;
		for (int i = 0; i < res.size(); i++) cout << res[i] << endl;
		res.clear();
		system("pause");
}
