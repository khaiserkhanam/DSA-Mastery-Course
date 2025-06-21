#include <iostream>
using namespace std;
void print(int x){
    x=x+1;
}
int main(){
    int x=90;
    cout<<"Before: "<<x<<endl;
    print(x);
    cout<<"After: "<<x<<endl;
}