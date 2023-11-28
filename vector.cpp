#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector<int> v;
	cout << "Vector capasity : " << v.capacity() << endl;
	// capasity
	v.push_back(1);
	cout << "vector capasity  : " << v.capacity() << endl;
	// capasity
	v.push_back(2);
	cout << "vector capasity  : " << v.capacity() << endl;

	// capacity
	v.push_back(3);
	cout << "vector capasity  : " << v.capacity() << endl;

	// Size of  vector
	cout << "vector size  : " << v.size() << endl;

	// Front (First elemant)
	cout << " Vector First elemant: " << v.front() << endl;

	// Back (Last element)
	cout << " Vector Last elemant: " << v.back() << endl;

	// Pop_Back
	cout << "Before Pop back" << endl;
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	v.pop_back();

	cout << "After Pop Back" << endl;
	for (int i : v)
	{
		cout << i << " " << endl;
	}

	cout << "Before Clear Size: " << v.size() << endl;
	v.clear();
	cout << "After Clear Size: " << v.size() << endl;

	return 0;
}