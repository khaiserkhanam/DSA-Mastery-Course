#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
int n;
cout<<"enter number:"<<endl;
cin>>n;
cout<<"Output will be : "<<fibonacci(n);
}
