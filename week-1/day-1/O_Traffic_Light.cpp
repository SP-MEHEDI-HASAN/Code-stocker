#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		char c;
		cin >> n >> c;
		string s;
		cin >> s;
		s = s + s;
		int sz = s.size();
		int i, j;
		i = j = 0;
		int mx = INT_MIN;
		if (c != 'g')
		{
			while (i <  sz)
			{
				while (i < sz && s[i] != c)
					i++;
				j = i + 1;
				while (j < sz && s[j] != 'g')
					j++;
				mx = max(mx, j - i);
				i = j + 1;
			}
			cout << mx << "\n";
		}
		else
			cout << 0 << "\n";
	}
}