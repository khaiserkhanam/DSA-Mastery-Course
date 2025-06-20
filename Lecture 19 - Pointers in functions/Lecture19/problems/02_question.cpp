#include <iostream>
using namespace std;

void problem2() {
    int score = 5;
    int *a = &score;
    int *b = a;
    (*b)++;
    cout << score << endl; 

}
int main() {
    problem2();  
    return 0;
}