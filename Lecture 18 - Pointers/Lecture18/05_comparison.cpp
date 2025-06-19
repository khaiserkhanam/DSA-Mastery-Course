#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=25;
    int* p1=&a;
    // int* p2=&b;
    int* p2=&a;
    if(p1!=p2){
        cout<<"Address are different"<<endl;
    }else{
         cout<<"Address are same"<<endl;
    }
   
}
