#include<iostream>
using namespace std;
int main(){
    int light;
    cout << "Enter light color (1-Red, 2-Yellow, 3-Green): ";
    cin>>light;
    switch(light){
        case 1: 
            cout<<"STOP";
            break;
         case 2: 
            cout<<"READY";
            break;
         case 3: 
            cout<<"GO";
            break;
        default:
        cout<<"Invalid color";
    }
}