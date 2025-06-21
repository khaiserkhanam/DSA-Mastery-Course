#include <iostream>
using namespace std;

int x=100;
void a(){
   cout<<"A : "<<x<<endl;
}
void b(){
     cout<<"B : "<<x<<endl;
     x++;
     a();
}
int main(){
   cout<<"Main : "<<x<<endl;
   b();
}