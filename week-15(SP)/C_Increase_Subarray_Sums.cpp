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
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int rec[n + 1];
        int sz = 1;
        while (sz <= n)
        {
            int l = 0;
            int r = 0;
            int mx = INT_MIN;
            int sum = 0;
            while (r < n)
            {
                sum += ar[r];
                if (r - l + 1 == sz)
                {
                    mx = max(sum, mx);
                    sum -= ar[l];
                    l++;
                }
                r++;
            }
            rec[sz] = mx;
            sz++;
        }

        for (int i = 0; i <= n; i++)
        {
            int tmp = 0;
            for (int j = 1; j <= n; j++)
            {
                tmp = max(tmp, rec[j] + min(i, j) * k);
            }
            cout << tmp << " ";
        }
        cout << "\n";
    }
    return 0;
}