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
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0])
        {
            cout << "YES\n"
                 << a[0] << "*\n";
        }
        else if (a.back() == b.back())
        {
            cout << "YES\n"
                 << "*" << a.back() << "\n";
        }
        else
        {
            bool flg = false;
            for (int i = 1; i < a.size(); i++)
            {
                for (int j = 1; j < b.size(); j++)
                {
                    if (a[i] == b[j] && a[i - 1] == b[j - 1])
                    {
                        cout << "YES\n";
                        cout << "*" << a[i - 1] << a[i] << "*\n";
                        flg = true;
                        break;
                    }
                }
                if (flg)
                    break;
            }
            if (!flg)
                cout << "NO\n";
        }
    }
    return 0;
}