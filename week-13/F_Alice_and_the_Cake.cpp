#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
class cmp
{
public:
    bool operator()(ll a, ll b)
    {
        if (a < b)
            return true;
        return false;
    }
};
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    tc
    {
        int n;
        cin >> n;
        priority_queue<ll, vector<ll>, cmp> pa;
        priority_queue<ll, vector<ll>, cmp> pb;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            pa.push(x);
        }
        pb.push(sum);
        bool flg = true;
        while (!pb.empty())
        {
            ll tp_b = pb.top();
            ll tp_a = pa.top();
            if (tp_b > tp_a)
            {
                pb.pop();
                pb.push(tp_b / 2);
                pb.push(tp_b / 2 + (tp_b % 2));
            }
            else if (tp_b == tp_a)
            {
                pb.pop();
                pa.pop();
            }
            else
            {
                flg = false;
                break;
            }
        }
        if (pb.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}