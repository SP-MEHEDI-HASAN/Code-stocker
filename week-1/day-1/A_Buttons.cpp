#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (2 * a - 1 < (a + b) && (2 * b - 1) < (a + b))
	{
		cout << a + b << "\n";
	}
	else if (a > b)
	{
		cout << 2 * a - 1 << "\n";
	}
	else
		cout << 2 * b - 1 << "\n";
}