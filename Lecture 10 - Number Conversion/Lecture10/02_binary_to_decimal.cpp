#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binary=1111,i=0,answer=0;
    while(binary>0){
        int lastbit=binary%10;
        answer=(lastbit*pow(2,i))+answer;
        binary=binary/10;
        i++;
    }
     cout<<answer;
}