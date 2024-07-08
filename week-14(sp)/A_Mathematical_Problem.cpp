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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;
        bool flg = true;
        int j;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i] - '0');
            if (s[i] - '0' == 0)
            {
                cnt++;
                if (flg)
                    j = i;
                flg = false;
            }
        }
        if (n == 2)
        {
            cout << v[0] * 10 + v[1] << "\n";
            continue;
        }
        ll sum = 0;
        if (n == 3 && cnt == 1 && j == 1)
        {
            goto end;
        }
        else if(cnt > 0)
        {
            cout << 0 << "\n";
            continue;
        }
    end:
        for (auto i : v)
        {
            if (i != 1)
            {
                sum += i;
            }
        }
        if (sum == 0)
            sum = 1;
        ll mn = LLONG_MAX;
        // cout << sum << "\n";
        for (int i = 0; i < n - 1; i++)
        {
            ll tar = sum;
            if (v[i] != 1)
            {
                tar -= v[i];
            }
            if (v[i + 1] != 1)
            {
                tar -= v[i + 1];
            }
            if (v[i] * 10 + v[i + 1] == 1 || tar == 1)
            {
                mn = min(tar * (v[i] * 10 + v[i + 1]), mn);
            }
            else
                mn = min(mn, tar + (v[i] * 10 + v[i + 1]));
        }
        cout << mn << "\n";
    }
    return 0;
}