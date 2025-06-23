#include <iostream>
using namespace std;
bool isPowerof2(int n){
    if(n==0) return false;
    if(n==1) return true;
    if(n%2!=0) return false;
    return isPowerof2(n/2);
}

int main() {
   cout<<"Power of 2: "<<(isPowerof2(7)?"Yes":"No")<<endl;
}
