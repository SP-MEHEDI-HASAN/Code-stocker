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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int f, s;
        int l = 0, r = n - 1;
        bool flg = true, flg1 = true, flg2 = true;
        while (l < r)
        {
            if (ar[l] != ar[r])
            {
                f = ar[l];
                s = ar[r];
                flg = false;
                break;
            }
            l++;
            r--;
        }
        if (flg)
        {
            cout << "YES\n";
            continue;
        }
        vector<int> fs, se;
        l = 0, r = n - 1;
        while (l < r)
        {
            if (ar[l] == f)
            {
                l++;
                continue;
            }
            if (ar[r] == f)
            {
                r--;
                continue;
            }
            if (ar[l] != ar[r])
            {
                flg1 = false;
                break;
            }
            l++, r--;
        }
        if (flg1)
        {
            cout << "YES\n";
            continue;
        }
        l = 0, r = n - 1;
        while (l < r)
        {
            if (ar[l] == s)
            {
                l++;
                continue;
            }
            if (ar[r] == s)
            {
                r--;
                continue;
            }
            if (ar[l] != ar[r])
            {
                flg2 = false;
                break;
            }
            l++, r--;
        }
        if (flg2)
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}