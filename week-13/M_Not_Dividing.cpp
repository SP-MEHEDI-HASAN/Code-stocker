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
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
                ar[i] = 2;
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i + 1] % ar[i] == 0)
                ar[i + 1]++;
        }
        for (auto i : ar)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}