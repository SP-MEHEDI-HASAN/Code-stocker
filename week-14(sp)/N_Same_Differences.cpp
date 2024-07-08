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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i] - i]++;
        }
        ll sum = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ll cnt = it->second;
            cnt--;
            sum += (cnt * (cnt + 1)) / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}