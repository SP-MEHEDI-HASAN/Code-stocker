#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool flag = true;
	for (int i = 1; i <= n; i++)
	{
		if (flag)
			cout << "a";
		else
			cout << "b";
		if (i % 2 == 0)
			flag = !flag;
	}
	cout << "\n";
}