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
    double x, y;
    cin >> x >> y;
    double ex1 = log10(y) / log10(x);
    double ex2 = y / x;
    if (ex1 == ex2)
        cout << "=\n";
    else if (ex2 > ex1)
        cout << ">\n";
    else
        cout << "<\n";
    return 0;
}