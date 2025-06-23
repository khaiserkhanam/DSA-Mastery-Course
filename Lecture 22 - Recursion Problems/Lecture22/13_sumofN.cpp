#include <iostream>
using namespace std;

int sumOfN(int n){
    if(n==1) return 1;
    return n+sumOfN(n-1);
}
int main() {
int n;
cout<<"enter number:"<<endl;
cin>>n;
cout<<"Output will be : "<<sumOfN(n);
}
