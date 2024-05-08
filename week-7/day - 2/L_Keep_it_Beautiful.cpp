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
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		vector<char> v(n);
		v[0] = '1';
		int i = 1;
		while (ar[i - 1] <= ar[i] && i < n)
		{
			v[i] = '1';

			i++;
		}
		int cur = ar[i - 1];
		while (i < n)
		{
			if (ar[i] <= ar[0])
			{
				cur = ar[i];
				break;
			}
			else if (ar[i] >= cur)
			{
				v[i] = '1';
				cur = ar[i];
			}
			else
				v[i] = '0';
			i++;
		}
		for (; i < n; i++)
		{
			if (ar[i] >= cur && ar[i] <= ar[0])
			{
				v[i] = '1';
				cur = ar[i];
			}
			else
			{
				v[i] = '0';
			}
		}
		for (char i : v)
		{
			cout << i;
		}
		cout << "\n";
	}
}
