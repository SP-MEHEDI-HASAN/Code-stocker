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
        int n;
        cin >> n;
        int ar[n];
        vector<int> tw, tr;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (++mp[ar[i] % 10] <= 3)
                v.push_back(ar[i] % 10);
        }
        sort(v.begin(), v.end());
        bool flg = false;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    if ((v[i] + v[j] + v[k]) % 10 == 3)
                    {
                        flg = true;
                    }
                    if (flg)
                        break;
                }
                if (flg)
                    break;
            }
            if (flg)
                break;
        }
        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}