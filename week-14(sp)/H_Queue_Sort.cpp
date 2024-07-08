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
        int mn = INT_MAX;
        int ind;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] < mn)
            {
                ind = i;
                mn = ar[i];
            }
        }
        bool flg = true;
        for (int i = ind; i < n - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                flg = false;
                break;
            }
        }
        if (flg)
        {
            cout << ind << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}