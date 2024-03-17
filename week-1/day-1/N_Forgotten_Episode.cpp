#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll ar[n];
	ll sum = 0;
	ll tar = (n * (n + 1)) / 2;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> ar[i];
		sum = sum + ar[i];
	}
	cout << tar - sum << "\n";
}