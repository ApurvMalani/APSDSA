#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        //  f  =  Fuel,
        // k = kilometers distance  of  homme 

        int f, k;
        cin >> f >> k;


        int _find_distance = f * 5 ;

        if (_find_distance >= k)

            cout << "YES" << endl;

        else

            cout << "NO " << endl;
    }

   return 0 ;

}