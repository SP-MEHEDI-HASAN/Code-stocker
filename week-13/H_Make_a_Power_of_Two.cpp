#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
vector<int> ar[63];
void fun(int i, ll x)
{
    if (x == 0)
        return;
    fun(i, x / 10);
    ar[i].push_back(x % 10);
}
void fun1(int x, vector<int> &r)
{
    if (x == 0)
        return;
    fun1(x / 10, r);
    r.push_back(x % 10);
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    vector<ll> v;
    ll x = 1;
    for (int i = 0; i < 63; i++)
    {
        v.push_back(x << i);
    }
    for (int i = 0; i < 63; i++)
    {
        fun(i, v[i]);
    }
    // for (int i = 0; i < 63; i++)
    // {
    //     for (auto k : ar[i])
    //         cout << k;
    //     cout << " ";
    // }

    tc
    {
        int n, ind;
        cin >> n;
        vector<int> r;
        fun1(n, r);
        int mn = INT_MAX;
        int mx = INT_MIN;
        int sz = 0;
        int ans;
        for (int i = 0; i < 63; i++)
        {
            int j = 0;
            sz = 0;
            for (auto c : r)
            {
                if (c == ar[i][j] && j < ar[i].size())
                {
                    sz++;
                    j++;
                }
            }
            ans = ar[i].size() - sz + r.size() - sz;
            if (ans < mn)
            {
                mn = ans;
                ind = i;
            }
        }
        cout << mn << "\n";
    }
}