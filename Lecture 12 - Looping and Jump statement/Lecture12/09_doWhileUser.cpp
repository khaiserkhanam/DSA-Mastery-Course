#include<iostream>
using namespace std;
int main(){
     int num;
    cout<<"enter number : "<<endl;
    cin>>num;
    do{
        cout<<"Aapne number diya : "<<num<<endl;
        cin>>num;
    }while(num!=0);
    cout<<"Program end";
}