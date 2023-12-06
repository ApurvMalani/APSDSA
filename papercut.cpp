#include <bits/stdc++.h>
using namespace std;

void cutarea(int t)
{
	int k, n;

	while (t--)
	{
		cin >> n >> k;

		double ans = n / k;

		int area = ans * ans;

		cout << area << endl;
	}
}

int main()
{
	int t;
	cin >> t;

	cutarea(t);

	return 0;
}