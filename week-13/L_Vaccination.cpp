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
        ll k, d, w;
        cin >> n >> k >> d >> w;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        ll ext = ar[0] + w;
        int ds = k - 1;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (ds > 0)
            {
                if (ar[i] <= ext || ar[i] <= ext + d)
                    ds--;
                else
                {
                    cnt++;
                    ext = ar[i] + w;
                    ds = k - 1;
                }
            }
            else
            {
                cnt++;
                ds = k - 1;
                ext = ar[i] + w;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}