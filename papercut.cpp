#include <bits/stdc++.h>
using namespace std;

void cutarea(int t)
{
	 // 5 1  => (n = 5 , k = 1)  |  (n/k = ans) | (ans * ans )   | (5/1) = 5 |   (5*5) = 25 .
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
