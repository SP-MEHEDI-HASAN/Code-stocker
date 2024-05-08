#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll ar[n];
		vector<ll> p;
		vector<ll> m;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			if (ar[i] >= 0LL)
			{
				p.push_back(ar[i]);
			}
			else
				m.push_back(-1LL * ar[i]);
		}
		sort(p.begin(), p.end());
		sort(m.begin(), m.end());
		ll sum = 0;
		if (p.size() % k != 0)
		{
			if (p.size() > k)
				sum += 2 * p[p.size() % k - 1];
			else
				sum += p[p.size() - 1];
		}
		int cnt = 0;
		ll mx = LLONG_MIN;
		for (int i = p.size() % k; i < p.size(); i++)
		{
			cnt++;
			mx = max(mx, p[i]);
			if (i == p.size() - 1)
			{
				sum += p[i];
			}
			else if (cnt % k == 0)
			{
				sum += 2 * p[i];
			}
		}
		if (m.size() % k != 0)
		{
			if (m.size() > k)
				sum += 2 * m[m.size() % k - 1];
			else
				sum += m[m.size() - 1];
		}
		cnt = 0;
		mx = LLONG_MIN;
		for (int i = m.size() % k; i < m.size(); i++)
		{
			cnt++;
			mx = max(mx, m[i]);
			if (i == m.size() - 1)
			{
				sum += mx;
			}
			else if (cnt % k == 0)
			{
				sum += 2 * mx;
			}
		}
		if (p.size() != 0 && m.size() != 0)
		{
			if (p.back() > m.back())
			{
				sum += m.back();
			}
			else
				sum += p.back();
		}
		cout << sum << "\n";
	}
}