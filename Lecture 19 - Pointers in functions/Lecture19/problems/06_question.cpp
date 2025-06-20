#include <iostream>
using namespace std;

void problem6() {
    float x = 15.5;
    float y = 25.5;
    float *ptr = &x;
    (*ptr)++;  
    *ptr = y;  
    cout << *ptr << " " << x << " " << y << endl; 
}
int main() {
    problem6();  
    return 0;
}