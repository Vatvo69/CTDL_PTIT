using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0;
        stack<int> st;
        int sum = 0, res = -1;
        while (i < n)
        {
            if (st.empty() || a[st.top()] <= a[i])
                st.push(i++);
            else
            {
                int top = st.top();
                st.pop();
                if (st.empty())
                    sum = a[top] * i;
                else
                    sum = a[top] * (i - st.top() - 1);
                res = max(res, sum);
            }
        }
        while (!st.empty())
        {
            int top = st.top();
            st.pop();
            if (st.empty())
                sum = a[top] * i;
            else
                sum = a[top] * (i - st.top() - 1);
            res = max(res, sum);
        }
        cout << res << endl;
    }
}