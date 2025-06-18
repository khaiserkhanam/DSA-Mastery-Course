#include<iostream>
using namespace std;
void printAp(int a, int d, int n){
    for(int i=1;i<=n;i++){
        int term=a+(i-1)*d;
        cout<<term <<" ";
    }
}
int main(){
 int n,a ,d;
 cout<<"Enter first number: ";
 cin>>a;
 cout<<"Enter common difference: ";
 cin>>d;
  cout<<"Enter  number: ";
 cin>>n;
 printAp(a,d,n);
}