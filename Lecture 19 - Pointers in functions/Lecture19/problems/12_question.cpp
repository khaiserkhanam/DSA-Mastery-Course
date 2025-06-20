#include <iostream>
using namespace std;

void increment(int **ptr){
    ++(**ptr);
}
void problem12() {
    int num = 99;
    int *p = &num;
    increment(&p);
    cout << num << endl; 
}
int main() {
    problem12();  
    return 0;
}