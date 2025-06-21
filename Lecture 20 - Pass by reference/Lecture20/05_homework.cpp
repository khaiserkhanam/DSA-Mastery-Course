#include <iostream>
using namespace std;

int& update(int y){
    y=y+10;
    return y;
}
int main(){
    int x=5;
    update(x);
    cout<<x<<endl;
}