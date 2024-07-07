// #include <bits/stdc++.h>
// #define ll long long
// #define tc    \
//     int t;    \
//     cin >> t; \
//     while (t--)
// using namespace std;
// bool cmp(int a, int b)
// {
//     return (a >= b);
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     tc
//     {
//         int n;
//         int m;
//         cin >> n >> m;
//         int ar[m];
//         for (int i = 0; i < m; i++)
//         {
//             cin >> ar[i];
//         }
//         sort(ar, ar + m);
//         vector<int> v;
//         for (int i = 1; i < m; i++)
//         {
//             v.push_back(ar[i] - ar[i - 1] - 1);
//         }
//         v.push_back(n - ar[m - 1] + ar[0] - 1);
//         sort(v.begin(), v.end(), cmp);
//         ll k = 0;
//         ll sum = 0;
//         for (auto i:v)
//         {
//             if (i - k > 1)
//             {
//                 // k += 2LL;
//                 sum += (i-k - 1);
//             }
//             else if (i - k == 1)
//             {
//                 sum++;
//                 // k++;
//             }
//             k+= 4;
//         }
//         ll total = 0;
//         for (auto i : v)
//         {
//             total += i;
//         }
//         cout << total - sum + m << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

int isSubstring(string s, string sub)
{
    if (s.find(sub) != string::npos)
        return s.find(sub);
    return -1;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    tc
    {
        int n, m;
        cin >> n >> m;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m);
        vector<int> v;
        for (int i = 1; i < m; i++)
        {
            v.push_back(a[i] - a[i - 1] - 1);
        }
        ll sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        v.push_back(n - a[m - 1] + a[0] - 1);
        sort(v.rbegin(), v.rend());
        ll cnt = 0, four = 0;
        for (auto it : v)
        {
            if (it - four > 1)
            {
                cnt += it - 1 - four;
                four += 4;
            }
            else if (it - four == 1)
            {
                cnt += 1;
                four += 2;
            }
        }
        cout << n - cnt << '\n';
    }
    return 0;
}