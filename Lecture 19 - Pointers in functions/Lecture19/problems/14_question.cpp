#include <iostream>
using namespace std;

void R(int z) {
    z += z;
    cout<<z << " ";
}
void S(int *y)  {
    int x = *y + 2;
    R(x);
    *y = x - 1; 
    cout<<x << " ";
}
void problem14() {
    int x = 5;
    S(&x);
    cout<<x << endl; 
}
int main() {
    problem14();  
    return 0;
}