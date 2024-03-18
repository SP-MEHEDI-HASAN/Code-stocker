#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int &i : a)
	{
		cin >> i;
	}
	for (int &i : b)
	{
		cin >> i;
	}
	int i = 0, j = 0;
	while (i < n || j < m)
	{
		if (j == m || (a[i] <= b[j] && i < n))
		{
			cout << a[i] << " ";
			i++;
		}
		else if (i == n || j < m)
		{
			cout << b[j] << " ";
			j++;
		}
	}
	cout << "\n";
}