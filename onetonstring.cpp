#include <bits/stdc++.h>
using namespace std;

vector<string> &ans(int i, int n)
{
	static vector<string> result;
	if (i > n)
		return result;
	cout << "Coding Ninjas"
		 << " ";
	ans(i + 1, n);
}

int main()
{
	int n;
	cin >> n;

	ans(1, n);

	return 0;
}