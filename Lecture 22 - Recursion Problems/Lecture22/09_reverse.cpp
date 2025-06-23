#include <iostream>
using namespace std;
int reverseNumber(int n,int reverse=0){
    if(n==0) return reverse;
    return reverseNumber(n/10,reverse*10+(n%10));
}

int main() {
   cout<<"Reverse: "<<reverseNumber(1234)<<endl;
}
