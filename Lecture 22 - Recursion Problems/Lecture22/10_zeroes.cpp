#include <iostream>
using namespace std;
int countZeroes(int n){
    if(n==0) return 0;
    int count=(n%10==0)?1:0;
    return count+countZeroes(n/10);
}

int main() {
   cout<<"Count Number of Zeroes: "<<countZeroes(10203040)<<endl;
}
