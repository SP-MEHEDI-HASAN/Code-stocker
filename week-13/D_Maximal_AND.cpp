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
        int n, k;
        cin >> n >> k;
        int ar[n];
        int v[31] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if (((ar[i] >> j) & 1) == 0)
                    v[j]++;
            }
        }
        int sum = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (v[i] <= k)
            {
                k -= v[i];
                sum += (1 << i);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}