#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            ar[i] = s[i] - '0';
        }
        stack<int> st;
        int chk = ar[0] + 1;
        if (chk >= 9)
            chk = 1;
        else
            chk++;
        int x, y;
        x = chk, y = 0;
        int ans;
        for (int i = n - 1; i >= 0; i--)
        {
            ar[i] += y;
            if (x < ar[i])
            {
                ans = x + 10 - ar[i];
                y = 1;
            }
            else
            {
                ans = x - ar[i];
                y = 0;
            }
            st.push(ans);
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}