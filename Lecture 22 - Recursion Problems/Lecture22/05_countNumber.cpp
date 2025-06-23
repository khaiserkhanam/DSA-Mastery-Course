#include <iostream>
using namespace std;
int countSumWays(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    return countSumWays(n-1)+countSumWays(n-3)+countSumWays(n-4);
}

int main() {
    cout << "Ways to express 5 as sum of 1,3,4:"<<countSumWays(5) ;
}
