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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int l, r;
        l = r = 0;
        int pl = 0;
        int mi = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                if(b[i] == 1)
                r++;
            }
            else if (a[i] > b[i])
            {
                if(a[i] == 1)
                l++;
            }
            else if (a[i] == b[i] && a[i] == 1)
            {
                pl++;
            }
            else if (a[i] == b[i] && a[i] == -1)
                mi++;
        }
        while (pl--)
        {
            if (l < r)
            {
                l++;
            }
            else
                r++;
        }
        while (mi--)
        {
            if (r > l)
                r--;
            else
                l--;
        }
        cout << min(l, r) << "\n";
    }
    return 0;
}