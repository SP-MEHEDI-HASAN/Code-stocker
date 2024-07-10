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
    ll n, k;
    cin >> n >> k;
    ll l = 1;
    ll r = n;
    ll md = (r - r / 2) + l / 2;
    ll ans;
    while (l <= r)
    {
        ll x = (md * (md + 1)) / 2;
        if (x - (n - md) >= k)
        {
            ans = n - md;
            r = md - 1;
        }
        else
            l = md + 1;
        md = (r - r / 2) + l / 2;
    }
    cout << ans << "\n";
    return 0;
}