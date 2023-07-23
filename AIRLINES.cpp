#include <bits/stdc++.h>
using namespace std;

void airlines(int t)
{

    while (t--)
    {
        /*
         x = capasity;
         y = people ;
         z = rupees each  ticket ;
         */

        int x, y, z;
        cin >> x >> y >> z;

        if ((x * 10 >= y))

            cout << y * z << endl;

        else

            cout << ((10 * x) * z) << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    airlines(t);

    return 0;
}