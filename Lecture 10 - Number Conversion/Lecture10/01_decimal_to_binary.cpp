#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num=7,answer=0,i=0;
    while(num!=0){
        int lastBit=num&1;
        answer=(lastBit*pow(10,i))+answer;
        num=num>>1;
        i++;
    }
    cout<<answer;
}