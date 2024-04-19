#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >> n;
	int ar[n];
	int tot = 0;
	// int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		tot += ar[i];
		// sum += ar[i];
	}
	bool flag = false;
	if (tot % 360 == 0)
	{
		cout << "YES\n";
	}
	else
	{
		for (int i = 1; i < (1 << n); i++)
		{
			int j = 0;
			int sum = 0;
			int k = i;
			while (k > 0)
			{
				if ((k & 1) == 1)
					sum += ar[j];
				k = k >> 1;
				j++;
			}
			if ((tot - sum) == sum || (tot - 2*sum) % 360 == 0)
			{
				cout << "YES\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "NO\n";
	}
}