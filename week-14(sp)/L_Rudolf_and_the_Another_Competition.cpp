#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
bool cmp(pair<ll, pair<ll, int>> a, pair<ll, pair<ll, int>> b)
{
    if (a.first > b.first)
        return true;
    if (a.first == b.first)
    {
        if (a.second.first < b.second.first)
            return true;
        if (a.second.first == b.second.first)
        {
            if (a.second.second == 0)
                return true;
            return false;
        }
        return false;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> v[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                v[i].push_back(x);
            }
            sort(v[i].begin(), v[i].end());
        }
        vector<pair<ll, pair<ll, int>>> p;
        for (int i = 0; i < n; i++)
        {
            ll sum = 0;
            ll pen = 0;
            int pint = 0;
            for (auto j : v[i])
            {
                if (sum + j <= h)
                {
                    sum += j;
                    pen += sum;
                    pint++;
                }
                else
                {
                    break;
                }
            }
            p.push_back({pint, {pen, i}});
        }
        sort(p.begin(), p.end(), cmp);
        int i = 0;
        for (auto x : p)
        {
            if (x.second.second == 0)
            {
                cout << i + 1 << "\n";
                break;
            }
            i++;
        }
    }
    return 0;
}