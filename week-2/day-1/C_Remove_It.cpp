#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, except;
	cin >> n >> except;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x != except)
			v.push_back(x);
	}
	for (int i : v)
		cout << i << " ";
}