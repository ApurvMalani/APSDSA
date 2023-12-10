#include <bits/stdc++.h>
using namespace std;

int main()
{
	//  2d matrix ;

	int arr[5][5];
	int row, column;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				row = i, column = j;
		}
	}

	int result = abs(row - 2) + abs(column - 2);

	cout << result;

	return 0;
}