#include <iostream>
using namespace std;
int sumDigits(int n){
    if(n==0) return 0;
    return (n%10)+sumDigits(n/10);
}

int main() {
   cout<<"sum og digits digits: "<<sumDigits(124)<<endl;
}
