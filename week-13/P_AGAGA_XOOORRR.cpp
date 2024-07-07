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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x = x ^ ar[i];
        }
        if (x == 0)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            int d = 0;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                d = d ^ ar[i];
                if (d == x)
                {
                    cnt++;
                    d = 0;
                }
            }
            if (d == 0 && cnt >= 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}