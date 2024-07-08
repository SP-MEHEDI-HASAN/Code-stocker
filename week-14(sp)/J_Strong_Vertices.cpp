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
        ll ar[n], br[n];
        pair<ll, ll> v1[n], v2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> br[i];
        }
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({ar[i] - br[i], i});
        }
        sort(v.begin(), v.end(), greater<pair<ll, ll>>());
        vector<int> ans;
        ans.push_back(v[0].second);
        for (int i = 1; i < v.size(); i++)
        {
            if (v[0].first == v[i].first)
            {
                ans.push_back(v[i].second);
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (auto i : ans)
        {
            cout << i+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}