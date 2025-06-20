#include <iostream>
using namespace std;

void problem9() {
    int one = 5;
    int *a = &one;
    int **b = &a;
    int two = 10;
    *b = &two;
    (*a)++;
    cout << one << " " << two << endl; 
}
int main() {
    problem9();  
    return 0;
}