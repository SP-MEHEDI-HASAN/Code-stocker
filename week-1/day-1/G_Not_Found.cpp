#include <bits/stdc++.h>
using namespace std;
int main()
{
	int rec[26] = {0};
	string s;
	cin >> s;
	for(char c:s)
	{
		rec[c-'a']++;
	}
	bool flag = true;
	for(int i = 0;i<26;i++)
	{
		if(rec[i] == 0)
		{
			cout << (char) (i+'a') << "\n";
			flag = false;
			break;
		}
	}
	if(flag)
	cout << "None\n";
}