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
        int n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        sort(ar, ar + n);
        list<ll> l;
        l.push_back(ar[0]);
        for (int i = 1; i < n; i++)
        {
            if (l.back() != ar[i])
                l.push_back(ar[i]);
        }
        int t = 0;
        int s = 0;
        while (!l.empty())
        {
            ll p = l.front();
            if (mp[p] > 1)
                t++;
            else
                s++;
            l.pop_front();
        }
        s = s / 2 + (s % 2 ? 1 : 0);
        cout << t + s << "\n";
    }
    return 0;
}