#include <iostream>
using namespace std;
int main(){
 
        int x=10;
    int* ptr=&x;
    int** ptr1=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
    **ptr1=**ptr1+10;
     cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;


}
