#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll x, y;
	cin >> x >> y;
	int cnt = 0;
	while (x <= y)
	{
		cnt++;
		x = x * 2;
	}
	cout << cnt << "\n";
}