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

    int ar[32769] = {0};
    vector<int> v;
    for (int i = 2; i <= 32768; i++)
    {
        int cnt = 0;
        int j = i;
        while (j % 2 == 0)
        {
            cnt++;
            j /= 2;
        }
        ar[i] = cnt;
        if (cnt > 0)
        {
            v.push_back(i);
        }
    }
    // for (int i = 1; i <= 16; i++)
    // {
    //     cout << i << " -" << ar[i] << "\n";
    // }
    int n;
    cin >> n;
    int x[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x[i];
    // }
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] == 0)
        {
            cout << 0 << " ";
            continue;
        }
        int l = 0;
        int r = v.size() - 1;
        int md = (r - r / 2) + l / 2;
        int ans = -1;
        while (l <= r)
        {
            if (v[md] >= x[i])
            {
                ans = md;
                r = md - 1;
            }
            else
                l = md + 1;
            md = (r - r / 2) + l / 2;
        }
        int mn = INT_MAX;
        // problem
        while (v[ans] - x[i] <= 15 && ans < v.size())
        {
            int nd = min(15 - ar[v[ans]], 32768 - v[ans]);
            mn = min(mn, nd + v[ans] - x[i]);
            ans++;
        }
        cout << mn << " ";
    }
    return 0;
}