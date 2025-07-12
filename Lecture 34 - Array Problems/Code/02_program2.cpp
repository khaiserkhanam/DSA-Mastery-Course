#include<iostream>
using namespace std;

// void variableChange(int x){
//     x=9;
// }
void arrayChange(int arr[]){
    arr[1]=20;
}
int main(){
    // int x=5;
    // cout<<"Before :"<<x<<endl;
    // variableChange(x);
    // cout<<"After :"<<x<<endl;

    // Array
    int arr[]={1,2,3};
      cout<<"Before :"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
      cout<<"After :"<<endl;
      arrayChange(arr);
       for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

}