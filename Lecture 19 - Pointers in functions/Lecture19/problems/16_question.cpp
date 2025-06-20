#include <iostream>
using namespace std;

int compute(int x, int *y, int **z) {
    int a, b;
    **z += 1;
    b = **z;
    *y += 2;
    a = *y;
    x += 3;
    return x + a + b;
}
void problem16() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << compute(c, b, a) << endl; 
}
int main() {
    problem16();  
    return 0;
}