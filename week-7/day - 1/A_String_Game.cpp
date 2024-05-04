#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt[2] = {0};
		bool flag = true;

		for (int i = 0; i < n; i++)
		{
			cnt[s[i] - '0']++;
		}
		int mx = min(cnt[0], cnt[1]);
		if (mx % 2 == 1)
			cout << "Zlatan\n";
		else
			cout << "Ramos\n";
	}
}