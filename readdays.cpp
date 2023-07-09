#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        // n = pages ,
        // d = pages read each day ,
        // e  = total days ;

        int n, d, e;
        cin >> n >> d >> e;

        int _total_page_num = d * e;
        if (_total_page_num >= n)

            cout << "YES" << endl;

                else 
                cout << "NO" << endl;
    }

    return 0;
}