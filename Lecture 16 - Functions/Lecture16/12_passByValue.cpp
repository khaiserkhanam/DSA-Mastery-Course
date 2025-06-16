#include<iostream>
using namespace std;
void update(int x){
    x=x+10;
    cout<<"Inside update "<<x<<endl;
}
int main(){
    int a=5;
    update(a);
    cout<<"Inside main "<<a<<endl;
}