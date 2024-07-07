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
        int n, m, k;
        cin >> n >> m >> k;
        while (m-- && n > 20)
        
        {
            n = n / 2 + 10;
        }
        if (n <= k * 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}