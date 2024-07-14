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
    string s;
    cin >> s;
    stack<char> a;
    int flg = 0;
    for (auto c : s)
    {
        if (a.empty())
        {
            a.push(c);
        }
        else if (a.top() == c)
        {
            flg++;
            a.pop();
        }
        else
            a.push(c);
    }
    if (flg % 2 == 0)
    {
        cout << "No\n";
    }
    else
        cout << "Yes\n";
    return 0;
}