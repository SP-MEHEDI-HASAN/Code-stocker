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
        int n, l, r;
        cin >> n >> l >> r;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll sum = 0;
        int i, j;
        i = j = 0;
        int cnt = 0;
        for (; j < n;)
        {
            while (sum < l && j < n)
            {
                sum += ar[j];
                j++;
            }
            while (sum > r && i < n)
            {
                sum -= ar[i];
                i++;
            }
            if (sum >= l && sum <= r)
            {
                cnt++;
                i = j;
                sum = 0;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}