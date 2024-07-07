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
        int n, m;
        cin >> n >> m;
        ll ar[n];
        map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        sort(ar, ar + n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[ar[i]] > 0 && mp[ar[i] * m] > 0)
            {
                mp[ar[i]]--;
                mp[ar[i] * m]--;
            }
            else if (mp[ar[i]] > 0)
            {
                mp[ar[i]]--;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}