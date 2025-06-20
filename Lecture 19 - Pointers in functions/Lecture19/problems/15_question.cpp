#include <iostream>
using namespace std;

void problem15() {
    int ***r, **q, *p, val = 8;
    p = &val;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r << endl; 
}
int main() {
    problem15();  
    return 0;
}