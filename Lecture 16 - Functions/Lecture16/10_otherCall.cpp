#include<iostream>
using namespace std;
void message(){
    cout<<"How are you"<<endl;
}
int greet(){
    cout<<"Good morning"<<endl;
    message();
    return 0;
}

//this will not work
// void message(){
//     cout<<"How are you"<<endl;
// }
int main(){
    cout<<"Main"<<endl;
    greet();
}