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
        auto fun = [&](ll k)
        {
            ll com = k;
            ll day = d;
            if (k >= n)
            {
                com = n - 1;
            }
            ll sum = 0;
            while (true)
            {
                if (day - (k + 1) >= 0)
                    day -= (k + 1);
                else
                    break;
                sum += ar[com];
            }
            day = (day >= n ? n : day);
            if (day != 0)
                sum += ar[day - 1];
            if (sum >= c)
                return true;
            return false;
        };
       ll mn = min(n,d);
        if (mx * d < c)
            cout << "Impossible\n";
        else if (ar[mn-1] >= c)
        {
            cout << "Infinity\n";
        }
        else
        {
            ll l = 0;
            ll r = d - 1;
            ll mid = (r - r / 2) + l / 2;
            ll ans = -1;
            while (l <= r)
            {
                if (fun(mid))
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
                mid = (r - r / 2) + l / 2;
            }
            if (ans != -1)
                cout << ans << "\n";
            else
                cout << "Impossible\n";
        }
    }
    return 0;
}