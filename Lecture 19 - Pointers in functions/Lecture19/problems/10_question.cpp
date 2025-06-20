#include <iostream>
using namespace std;

void problem10() {
    int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++ + 5;
    cout << a << " " << b << endl; 
}
int main() {
    problem10();  
    return 0;
}