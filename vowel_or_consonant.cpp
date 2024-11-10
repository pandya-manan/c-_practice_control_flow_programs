#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char alphabet;
    cout << "Enter an alphabet: ";
    cin >> alphabet;

    // Convert to lowercase for case-insensitive comparison
    char alphaLwr = tolower(alphabet);

    if (alphaLwr == 'a' || alphaLwr == 'e' || alphaLwr == 'i' || alphaLwr == 'o' || alphaLwr == 'u') {
        cout << "The alphabet is a vowel" << endl;
    } else {
        cout << "The alphabet is a consonant" << endl;
    }

    return 0;
}