#include <bits/stdc++.h>
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int n;
bool vis[1000][1000];
int a[2], b[2], c[2];
pair<int, int> v[] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, -1}, {-1, 1}, {1, 1}, {-1, -1}};
bool tst(int r, int c)
{
    if (r < 0 || r >= n || c < 0 || c >= n || a[0] - r == a[1] - c || -1 * (a[0] - r) == a[1] - c || r == a[0] || c == a[1])
    {
        return false;
    }
    return true;
}
void dfs(int r, int c)
{
    vis[r][c] = true;
    for (auto ch : v)
    {
        if (tst(r + ch.first, c + ch.second) && !vis[r + ch.first][c + ch.second])
        {
            dfs(r + ch.first, c + ch.second);
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    cin >> n;
    memset(vis, false, sizeof(vis));

    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> c[0] >> c[1];
    b[0]--;
    b[1]--;
    a[0]--;
    a[1]--;
    c[0]--;
    c[1]--;
    dfs(b[0], b[1]);
    if (vis[c[0]][c[1]])
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}