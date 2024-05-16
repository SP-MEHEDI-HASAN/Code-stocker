#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x == y)
	{
		cout << "=" << "\n";
	}
	else if (x == 1)
	{
		cout << "<" << "\n";
	}
	else if (y == 1)
	{
		cout << ">" << "\n";
	}
	else if (x + y == 6)
		cout << "=\n";
	else if (x == 3)
		cout << ">\n";
	else if (y == 3)
		cout << "<\n";
	else if (x > y)
		cout << "<\n";
	else
		cout << ">\n";
}