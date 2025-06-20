#include <iostream>
using namespace std;
int main(){
    // int x=10;
    // int* ptr=&x;
    // int** ptr1=&ptr;
    // cout<<x<<endl;
    // cout<<&x<<endl;
    //  cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    //   cout<<ptr1<<endl;
    // cout<<&ptr1<<endl;

        int x=10;
    int* ptr=&x;
    int** ptr1=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;


}
//10
// 0xcbf9dff7fc
// 0xcbf9dff7fc
// 0xcbf9dff7f0
// 0xcbf9dff7f0
// 0xcbf9dff7e8