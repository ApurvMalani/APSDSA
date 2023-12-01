#include <bits/stdc++.h>
using namespace std;

void ratingorder()
{

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			cout << "No" << endl;
			return;
		}
	}

	cout << "Yes" << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ratingorder();
	}
	return 0;
}