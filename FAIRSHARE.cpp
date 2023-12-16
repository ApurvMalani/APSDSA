#include <bits/stdc++.h>
using namespace std;

void fairseet(int t)
{
	while (t--)
	{
		double n, k;
		cin >> n >> k;

		double fairshare = floor(n / (k + 1));
		double getback = k * fairshare;
		int bill = n - floor(getback);

		cout << bill << endl;
	}
}

int main()
{
	int t;
	cin >> t;

	fairseet(t);
	return 0;
}
