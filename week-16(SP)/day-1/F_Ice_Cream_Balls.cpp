#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
ll fun(ll x)
{
    return (x * (x - 1)) / 2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc
    {
        ll n;
        cin >> n;
        ll l = 1;
        ll r = 1e10;
        ll md = (r - r / 2) + l / 2;
        ll ans;
        while (l <= r)
        {
            if (fun(md) <= n)
            {
                ans = md;
                l = md + 1;
            }
            else
                r = md - 1;
            md = (r - r / 2) + l / 2;
        }
        cout << n - fun(ans) + ans << '\n';
    }
    return 0;
}