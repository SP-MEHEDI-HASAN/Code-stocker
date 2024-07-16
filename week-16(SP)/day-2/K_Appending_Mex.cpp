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

    int n;
    cin >> n;
    ll ar[n];
    ll ind;
    bool flg = true;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] - mx > 1)
        {
            flg = false;
            ind = i;
            break;
        }
        mx = max(ar[i], mx);
    }
    if (!flg)
    {
        cout << ind + 1 << "\n";
    }
    else
        cout << -1 << "\n";
    return 0;
}
