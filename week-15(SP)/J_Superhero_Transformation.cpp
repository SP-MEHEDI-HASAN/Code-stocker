#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
char tst(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 'v';
    return 'c';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size())
    {
        cout << "No\n";
    }
    else
    {
        bool flg = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (tst(a[i]) != tst(b[i]))
            {
                flg = false;
                break;
            }
        }
        if (flg)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}