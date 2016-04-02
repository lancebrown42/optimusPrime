#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "Give me an integer to test primality" << endl;
    int n; //number to be checked
    cin >> n;
    float sn= sqrt(n); //square root of given number
    for (int i = 2; 2 <= i && i <= sn; i++){ //for all numbers between 2 and the sqaure root of given nunmber
        if (n % i == 0) { //if n/i bears no remainder
            cout << "The number is not prime" << endl;
            return 0; //end function and return false
        }
    } //else
    cout << "The number is prime." << endl;
    return 1; //end function and return true
}