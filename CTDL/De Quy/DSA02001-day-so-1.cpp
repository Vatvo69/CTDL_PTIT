using namespace std;
#include<iostream>
void in(int arr[], int n)
{
	cout << "[";
	int i;
	for (i = 0; i < n-2; i++) cout << arr[i] << " ";
	cout << arr[i]<<"]" << endl;
}
void solve(int arr[], int n,int i)
{
	
	for (int j = 0; j < i; j++) arr[j] += arr[j + 1];
	if (i == 1) return;
	in(arr, i);
	solve(arr, n, i - 1);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n,arr[200]; cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];
		in(arr, n+1);
		solve(arr, n,n);
	}
}
