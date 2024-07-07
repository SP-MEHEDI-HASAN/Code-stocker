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
        ll n, c, d;
        cin >> n >> c >> d;
        ll ar[n];
        ll mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }
        sort(ar, ar + n, greater<ll>());
        for (int i = 1; i < n; i++)
        {
            ar[i] = ar[i - 1] + ar[i];
        }
        if (mx >= c)
        {
            cout << "Infinity\n";
        }
        else
        {
            ll x = c / mx;
            if (x > d)
            {
                cout << "Impossible\n";
            }
            else if (x == 1)
            {
                cout << d - 2 << "\n";
            }
            else
            {
                ll k = (d - x) / (x - 1);
                if (k != 0 && (d - x) % (x - 1) != 0)
                    k++;
                ll z = k;
                if (z >= n)
                    z = n - 1;
                if ((ar[z] * (x - 1) + ar[0]) >= c)
                    cout << k << "\n";
                else
                    cout << "Impossible\n";
            }
        }
    }
    return 0;
}