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
        string a, b;
        cin >> a >> b;
        int mx = INT_MIN;
        int sum;
        for (int i = 0; i < b.size(); i++)
        {
            int k = i;
            sum = 0;
            for (int j = 0; j < a.size()&& k < b.size(); j++)
            {
                if (b[k] == a[j])
                {
                    sum++;
                    k++;
                }
            }
            mx = max(sum, mx);
        }
        cout << a.size() + b.size() - mx << "\n";
    }
    return 0;
}