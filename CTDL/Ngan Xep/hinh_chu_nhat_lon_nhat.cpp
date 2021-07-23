using namespace std;
#include <iostream>
#include <stack>
#include <algorithm>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[1000] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<int> st;
        int i = 0, max1 = -1, top, tmp;
        while (i < n)
        {
            if (st.empty() || a[st.top()] <= a[i])
                st.push(i++);
            else
            {
                top = st.top();
                st.pop();
                if (st.empty())
                    tmp = a[top] * i;
                else
                {
                    tmp = a[top] * (i - st.top() - 1);
                }
                max1 = max(max1, tmp);
            }
        }
        while (!st.empty())
        {
            top = st.top();
            st.pop();
            if (st.empty())
                tmp = a[top] * i;
            else
            {
                tmp = a[top] * (i - st.top() - 1);
            }
            max1 = max(max1, tmp);
        }
        cout << max1 << endl;
    }
}