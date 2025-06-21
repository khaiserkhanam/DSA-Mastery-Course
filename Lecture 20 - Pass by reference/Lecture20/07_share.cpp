#include <iostream>
using namespace std;


void a(int &z){
   cout<<"A : "<<z<<endl;
}
void b(int &y){
     cout<<"B : "<<y<<endl;
     a(y);
}
int main(){
    int x=100;
   cout<<"Main : "<<x<<endl;
   b(x);
}