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
        int h, n;
        cin >> h >> n;
        int a[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<int,int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            p.push_back({c[i],a[i]});
        }
        sort(p.begin(),p.end());
        auto fun = [&](ll turn)
        {
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += (turn / p[i].first + 1) * p[i].second;
                if (sum >= h)
                    return true;
            }
            return false;
        };
        ll l = 0;
        ll r = 4e10 + 50;
        ll mid = (r - r / 2) + l / 2;
        ll ans = -1;
        while (l <= r)
        {
            if (fun(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
            mid = (r - r / 2) + l / 2;
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}