#include <bits/stdc++.h>
using namespace std;

void recurtionrr(int i, int n)
{

	if (i < 1)
		return;

	cout << i << " ";

	recurtionrr(i - 1, n);
}

int main()
{
	int n;
	cin >> n;

	recurtionrr(n, n);

	return 0;
}

// vector<int> printNos(int x) {
//     if(x<=0){
//         return {} ;
//     }
//     cout << x << " ";
//     return printNos(x-1);
// }