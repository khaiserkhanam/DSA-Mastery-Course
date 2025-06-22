#include <iostream>
using namespace std;
void display(){
    cout<<"Recursion"<<endl;
    display();
}
int main(){
    display();
}