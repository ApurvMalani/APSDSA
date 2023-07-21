#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        //  n= friends numbers,
    // m= capacity
    // k= already entrolled
       
       // total_students = n + k 
       
       
        int total_students = N + K;

        if (total_students <= M) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
