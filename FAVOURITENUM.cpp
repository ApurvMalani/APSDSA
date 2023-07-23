#include <bits/stdc++.h>
using namespace std;

void fav_numbers(int t)
{
    while (t--)
    {

        int a;
        cin >> a;

        // Alice likes numbers which are even, and are a multiple of 7.
        // Bob likes numbers which are odd, and are a multiple of 9.

        // 1). Alice
        //  even   =  a % 2== 0   ;
        // odd   =  a % 7 == 0 ;

        if (a%2 == 0 && a%7 == 0)
            cout << "Alice" << endl;

        else if (a%2 == 1 && a%9 == 0)
        {
            cout << "Bob" << endl;
        }

        else

            cout << "Charlie" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    fav_numbers(t);
    return 0;
}
