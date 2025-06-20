#include <iostream>
using namespace std;

void problem11() {
    int a = 90;
    int *p = &a;
    int **q = &p;
    int b = ++(**q);
    int *r = *q;
    ++(*r);
    cout << a << " " << b << endl; 
}
int main() {
    problem11();  
    return 0;
}
