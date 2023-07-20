#include <bits/stdc++.h>
using namespace std;


/*

7 = n  , 3 = k   ;

5 + 1  = 6 | 6/3 == 1 
9+6+6+3+6+9  = 39 / 3 == 2 
 9 /3 == 3 
 
 9+9+9+9+9+6   = 51 / 3 == 4 
 
 
 output  : -   4 


*/

int main()
{
  int n, k, ans = 0;
  cin >> n >> k;

  while (n--) {
    int a;
    cin >> a;
    if (a % k == 0) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
