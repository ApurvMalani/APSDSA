#include <iostream>
using namespace std;

int main() {
  
  int  t ;
  cin >> t ;
  
  while(t--)
{
    int  x ; 
    std::cin >> x;
       
    int  hours = x+3 ;
    
    (hours>10) ? cout << "No" << endl : cout << "Yes" << endl;
}

	return 0;
}
