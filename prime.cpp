#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to check if a given number is a prime number or not: ";
    cin >> num;

    bool isPrime = true; // Assume num is prime initially

    // Check divisibility up to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "The given number " << num << " is a prime number" << endl;
    } else {
        cout << "The given number " << num << " is not a prime number" << endl;
    }

    return 0;
}