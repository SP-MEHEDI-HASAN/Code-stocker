#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    tc
    {
        int n;
        cin >> n;
        int ar[n];
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }
        if (mx != n)
        {
            cout << "NO\n";
            continue;
        }
        vector<int> v(n + 1);
        v[0] = n;
        for (int i = 0; i < n; i++)
        {
            v[ar[i]] = v[ar[i]] - 1;
        }
        int sum = v[0];
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i] + v[i - 1];
        }
        bool flg = true;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != v[i])
            {
                flg = false;
                break;
            }
        }
        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}