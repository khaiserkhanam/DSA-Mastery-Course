#include <iostream>
using namespace std;

void problem7() {
    char ch = 'b';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl; 
}
int main() {
    problem7();  
    return 0;
}