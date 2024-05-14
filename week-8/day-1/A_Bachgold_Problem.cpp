#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << n / 2 << "\n";
	int i = n / 2 - n % 2;
	for (int j = 0; j < i; j++)
	{
		cout << 2 << " ";
	}
	if (n % 2 == 1)
		cout << 3 << "\n";
}