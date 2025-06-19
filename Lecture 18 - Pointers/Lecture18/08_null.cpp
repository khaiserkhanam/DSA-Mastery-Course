
#include <iostream>
using namespace std;
int main(){

int* ptr=nullptr;
cout<<ptr<<endl;
int x=10;
ptr=&x;
cout<<ptr<<endl;
cout<<*ptr<<endl;
}
