#include <iostream>
using namespace std;

void problem3() {
    int marks = 9;
    int *ref = &marks;
    cout << (*ref)++ << " "; 
    cout << marks << endl; 
}
int main() {
    problem3();  
    return 0;
}