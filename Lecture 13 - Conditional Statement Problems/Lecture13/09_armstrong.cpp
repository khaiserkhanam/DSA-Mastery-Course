#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, original, sum = 0, rem;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    original = num;
    while (num != 0) {
        rem = num % 10;
        sum += pow(rem, 3);
        num /= 10;
    }
    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    return 0;
}
