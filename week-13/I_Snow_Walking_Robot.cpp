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
        string s, l, r, u, d;
        cin >> s;
        for (auto c : s)
        {
            if (c == 'L')
            {
                l.push_back('L');
            }
            else if (c == 'R')
            {
                r.push_back('R');
            }
            else if (c == 'U')
            {
                u.push_back('U');
            }
            else
                d.push_back('D');
        }
        int cnt = 0;
        if (!l.empty())
            cnt++;
        if (!r.empty())
            cnt++;
        if (!u.empty())
            cnt++;
        if (!d.empty())
            cnt++;
        if (cnt == 4)
        {
            int mn1 = min(l.size(), r.size());
            int mn2 = min(u.size(), d.size());
            cout << 2 * (mn1 + mn2) << "\n";
            for (int i = 0; i < mn2; i++)
            {
                cout << d[i];
            }
            for (int i = 0; i < mn1; i++)
            {
                cout << r[i];
            }
            for (int i = 0; i < mn2; i++)
            {
                cout << u[i];
            }
            for (int i = 0; i < mn1; i++)
            {
                cout << l[i];
            }
            cout << "\n";
        }
        else if (cnt == 3)
        {
            cout << 2 << "\n";
            if (r.empty() || l.empty())
            {
                cout << "DU\n";
            }
            else
                cout << "RL\n";
        }
        else if (cnt == 2)
        {
            if (!l.empty() && !r.empty())
            {
                cout << 2 << "\n"
                     << "LR\n";
            }
            else if (!d.empty() && !u.empty())
            {
                cout << 2 << "\n"
                     << "DU\n";
            }
            else
                cout << 0 << "\n\n";
        }
        else
            cout << 0 << "\n\n";
    }
    return 0;
}