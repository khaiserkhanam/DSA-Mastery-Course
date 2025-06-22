#include <iostream>
using namespace std;
void print(int n){
    //base condition
    if(n>6) return;
    cout<<n<<endl;
    print(n+1);
}
int main(){
 print(1);
}