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
        string s;
        cin >> s;
        s = " " + s;
        vector<int> v;
        v.push_back(0);
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                v.push_back(i);
            }
        }
        v.push_back(n + 1);
        int p, nx;
        bool flg = true;
        for (int i = 1; i < v.size(); i++)
        {
            p = v[i - 1];
            nx = v[i];
            if (nx - p <= m)
            {
                continue;
            }
            p += m;
            while (p < nx)
            {
                if (s[p] == 'C' || k <= 0)
                {
                    flg = false;
                    break;
                }
                if (s[p] == 'W')
                    k--;
                p++;
            }
            if (!flg)
                break;
        }
        if (flg)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}