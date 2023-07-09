#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int person;
        cin >> person;

        if (person <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if (person >= 3 && person <= 6)
        {
            cout << "SILVER" << endl;
        }
        else if (person >= 6)
        {
            cout << "GOLD" << endl;
        }
    }

    return 0;
}
