#include <iostream>
using namespace std;
int main(){
    int a=10;
    int& ref=a;
    cout<<a<<endl;
    cout<<ref<<endl;
    a++;
     cout<<a<<endl;
    cout<<ref<<endl;
    ref++;
     cout<<a<<endl;
    cout<<ref<<endl;
    cout<<&a<<endl;
    cout<<&ref<<endl;
}