#include <iostream>
using namespace std;

void multiply(int *p){
    *p = (*p)  * 2;
}
void problem8() {
    int val = 6;
    multiply(&val);
    cout << val << endl; 
}
int main() {
    problem8();  
    return 0;
}