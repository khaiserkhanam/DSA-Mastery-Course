#include<iostream>
using namespace std;
int sum(int a, int b=7,int c=1){
 return a+b;
}
int main(){
    int result=sum(5,9,1);
    cout<<result;
}