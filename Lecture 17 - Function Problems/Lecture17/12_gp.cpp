#include<iostream>
#include <cmath>
using namespace std;
void printGp(int a, int r, int n){
    for(int i=0;i<n;i++){
        int term=a*pow(r,i);
        cout<<term <<" ";
    }
}
int main(){
 int n,a ,r;
 cout<<"Enter first number: ";
 cin>>a;
 cout<<"Enter common ratio: ";
 cin>>r;
  cout<<"Enter  number: ";
 cin>>n;
 printGp(a,r,n);
}