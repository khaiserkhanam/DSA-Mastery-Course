#include <iostream>
using namespace std;

int countWays(int n){
    if(n==0 || n==1)
        return 1;
    return countWays(n-1)+countWays(n-2);

}
int main() {
    cout << "Count Ways to Climb 4 Stairs: " <<countWays(4)<<  endl;
}
