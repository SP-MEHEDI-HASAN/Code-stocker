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
        ll x, y, k;
        cin >> x >> y >> k;
        while (x > 1 && k > 0)
        {
            ll mn = min(k, y - x % y);
            k -= mn;
            x += mn;
            while (x % y == 0)
            {
                x = x / y;
            }
        }
        if (k > 0)
            cout << k % (y - 1) + 1 << "\n";
        else
            cout << x << "\n";
    }
    return 0;
}