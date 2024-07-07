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
        vector<ll> v;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i] / m;
            v.push_back(ar[i] % m);
        }
        sort(v.begin(), v.end());
        for (int i = 0, j = n - 1; i < j;)
        {
            if (v[i] + v[j] >= m)
            {
                sum++;
                i++;
                j--;
            }
            else
                i++;
        }
        cout << sum << "\n";
    }
    return 0;
}