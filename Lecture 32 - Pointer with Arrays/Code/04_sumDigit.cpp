#include <iostream>
using namespace std;

void sumDigit(int arr[], int size){
   int sum=0;
   for(int i=0;i<size;i++){
    sum+=arr[i];
   }
   cout<<sum;
}
int main() {
int arr[5]={10,20,30,40,50};
int size=sizeof(arr)/sizeof(arr[0]);
sumDigit(arr,size);


}
