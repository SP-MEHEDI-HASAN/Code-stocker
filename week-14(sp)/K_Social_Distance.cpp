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
        int sz, k;
        cin >> sz >> k;
        string s;
        cin >> s;
        int sum = 0;
        int ar[sz];
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '1')
                sum++;
            ar[i] = sum;
        }
        int cnt = 0;
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '0')
            {
                if (i == 0 && i + k < sz && ar[i] == ar[i + k])
                {
                    cnt++;
                    i += k;
                }
                else if (i == sz - 1 && i - k - 1 >= 0 && ar[i] == ar[i - k - 1])
                {
                    cnt++;
                    i += k;
                }
                else if (i - k - 1 >= 0 && i + k < sz && ar[i] == ar[i + k] && ar[i - k - 1] == ar[i])
                {
                    cnt++;
                    i += k;
                }
            }
        }
        if (cnt == 0 && ar[sz - 1] == 0)
            cnt++;
        cout << cnt << "\n";
    }
    return 0;
}