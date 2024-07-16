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
        ll n;
        cin >> n;
        vector<ll> ar(n - 1);
        vector<ll> v;
        ll tal = (n * (n + 1)) / 2;
        for (auto &i : ar)
        {
            cin >> i;
        }
        if (ar.back() > tal)
        {
            cout << "NO\n";
            continue;
        }
        v.push_back(ar[0]);
        for (int i = 1; i < n - 1; i++)
        {
            v.push_back(ar[i] - ar[i - 1]);
        }
        sort(v.begin(), v.end());
        int bg = 0, sm = 0;
        bool flg = true;
        ll mx = 0;
        ll sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i < v.size() - 1 && v[i] == v[i + 1])
            {
                sm++;
                mx = v[i];
            }
            if (v[i] > n)
            {
                bg++;
                mx = v[i];
            }
            if (bg > 1 || sm > 1 || (bg > 0 && sm > 0))
            {
                flg = false;
                break;
            }
            sum += v[i];
        }
        if (flg)
        {
            if (mx == 0 ||tal - (sum - mx) == mx)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}