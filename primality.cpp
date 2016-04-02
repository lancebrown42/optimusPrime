#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "Give me an integer to test primality" << endl;
    int n;
    cin >> n;
    float sn= sqrt(n);
    for (int i = 2; 2 <= i && i <= sn; i++){
        if (n % i == 0) {
            cout << "The number is not prime" << endl;
            return 0;
        }
    }
    cout << "The number is prime." << endl;
    return 1;
}