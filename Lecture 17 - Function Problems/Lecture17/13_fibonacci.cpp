#include<iostream>
using namespace std;
void printFibonacci(int n){
        int t1=0,t2=1,nextTerm;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<t1<<" ";
        }else if(i==2){
            cout<<t2<<" ";
        }else{
            nextTerm=t1+t2;
            cout<<nextTerm<<" ";
            t1=t2;
            t2=nextTerm;
        }
    }
}
int main(){
 int n;
  cout<<"Enter  number: ";
 cin>>n;
printFibonacci(n);
}