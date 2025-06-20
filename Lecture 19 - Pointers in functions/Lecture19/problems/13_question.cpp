#include <iostream>
using namespace std;

void problem13() {
    int val = 41;
    int *ptr = &val;
    cout << *ptr + 8 << endl; 
}
int main() {
    problem13();  
    return 0;
}
