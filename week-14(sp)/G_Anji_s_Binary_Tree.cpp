#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int mn;
string s;
void fun(int i, pair<int, int> p[], int cnt)
{
    if (p[i].first == -1 && p[i].second == -1)
    {
        mn = min(cnt, mn);
        return;
    }
    if (p[i].first != -1)
    {
        if (s[i] != 'L')
            fun(p[i].first, p, cnt + 1);
        else
            fun(p[i].first, p, cnt);
    }
    if (p[i].second != -1)
    {
        if (s[i] != 'R')
            fun(p[i].second, p, cnt + 1);
        else
            fun(p[i].second, p, cnt);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc
    {
        int n;
        cin >> n;
        cin >> s;
        mn = INT_MAX;
        pair<int, int> p[n];
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            p[i] = {l - 1, r - 1};
        }
        fun(0, p, 0);
        cout << mn << "\n";
    }
    return 0;
}