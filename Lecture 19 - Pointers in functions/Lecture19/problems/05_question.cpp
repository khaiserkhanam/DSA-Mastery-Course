#include <iostream>
using namespace std;

void problem5() {
    int x = 3;
    int y = 5;
    int *z = &y;
    x = *z;
    *z = *z + 3;
    cout << x << "  " << y << endl; 
}
int main() {
    problem5();  
    return 0;
}