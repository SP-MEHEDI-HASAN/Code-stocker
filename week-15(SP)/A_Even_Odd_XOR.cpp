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
        ll cs = 0;
        int p = 1 << 30;
        for (int i = 1; i <= n - 2; i++)
        {
            cs = cs ^ i;
        }
        if (cs != 0)
        {
            for (int i = 1; i <= n - 2; i++)
            {
                cout << i << " ";
            }
            cout << p << " " << (p ^ cs) << "\n";
        }
        else
        {
            for (int i = 1; i <= n - 3; i++)
            {
                cout << i << " ";
            }
            cout << ((n - 2) ^ p) << " " << p << " " << 0 << "\n";
        }
    }
    return 0;
}