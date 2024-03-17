#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int lm = b / c;
	bool flag = true;
	for (int i = a / c; i <= lm; i++)
	{
		if (i * c >= a)
		{
			cout << i * c << " ";
			flag = false;
			break;
		}
	}
	if (flag)
		cout << -1;
	cout << "\n";
}
