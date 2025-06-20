#include <iostream>
using namespace std;

void problem1() {
    int alpha = 7;
    int beta = 15;
    int *ptr = &beta;
    *ptr = 10;
    cout << alpha << " " << beta << endl; 
}
int main() {
    problem1();  
    return 0;
}
