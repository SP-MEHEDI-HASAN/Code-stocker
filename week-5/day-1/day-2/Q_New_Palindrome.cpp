#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int ar[26] = {0};
		for(char c:s)
		{
			ar[c-'a']++;
		}
		int cnt = 0;
		for(int i =0;i<26;i++)
		{
			if(ar[i] > 1)
			cnt++;
		}
		if(cnt > 1)
		cout << "YES\n";
		else
		cout << "NO\n";
	}
}