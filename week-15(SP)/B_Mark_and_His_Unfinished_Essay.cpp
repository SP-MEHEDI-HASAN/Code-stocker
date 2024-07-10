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
        ll n, m, q;
        cin >> n >> m >> q;
        string s;
        cin >> s;
        s = " " + s;
        vector<pair<ll, ll>> v;
        v.push_back({n, 0});
        ll sz = n;
        while (m--)
        {
            ll l, r;
            cin >> l >> r;
            sz = sz + r - l + 1LL;
            v.push_back({sz, l});
        }
        // cout << "\n";
        // for (auto p : v)
        // {
        //     cout << p.first << " " << p.second << "\n";
        // }
        auto fun = [&](ll x)
        {
            ll l = 1LL;
            ll r = v.size() - 1LL;
            ll mid = (r - r / 2) + l / 2;
            ll ans;
            while (l <= r)
            {
                if (v[mid].first >= x)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
                mid = (r - r / 2) + l / 2;
            }
            x = x - v[ans - 1].first;
            x = x + v[ans].second - 1LL;
            // cout << x << "--\n";
            return x;
        };
        while (q--)
        {
            ll p;
            cin >> p;
            while (p > n)
            {
                // cout << p << " ";
                p = fun(p);
            }
            cout << s[p] << "\n";
        }
    }
    return 0;
}