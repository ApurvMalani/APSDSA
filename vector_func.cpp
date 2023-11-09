#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capasity => " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capasity => " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capasity => " << v.capacity() << endl;
    cout << " Size of :- " << v.size() << endl;

    v.push_back(5);
    cout << "At the  => " << v.at(1) << endl;
    cout << "Front  first elemant :- " << v.front() << endl;
    cout << " Back last element  :- " << v.back() << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear Class" << v.size() << endl;
    v.clear();

    return 0;
}