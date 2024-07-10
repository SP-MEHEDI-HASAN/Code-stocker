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
        string s;
        int n;
        cin >> n;
        cin >> s;
        ll sum = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                sum += i;
            }
        }
        cout << sum + n << "\n";
    }
    return 0;
}