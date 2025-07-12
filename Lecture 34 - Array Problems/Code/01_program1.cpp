#include<iostream>
using namespace std;
int main(){
    //1st approach
    // int arr[]={5,2,9,1,7};
    // int n=sizeof(arr)/sizeof(arr[0]);

    // int maxValue=arr[0];
    // int minValue=arr[0];

    // for(int i=1;i<n;i++){
    //     if(arr[i]>maxValue){
    //         maxValue=arr[i];
    //     }
    //       if(arr[i]<minValue){
    //         minValue=arr[i];
    //     }
    // }
    // cout<<"Maximum Value: "<<maxValue<<endl;
    // cout<<"Minimum Value: "<<minValue<<endl;

     //2nd approach
    // int arr[]={5,2,9,1,7};
    // int n=sizeof(arr)/sizeof(arr[0]);

    // int maxValue=arr[0];
    // int minValue=arr[0];

    // for(int i=1;i<n;i++){
    //  maxValue=max(maxValue,arr[i]);
    //  minValue=min(minValue,arr[i]);

    // }
    // cout<<"Maximum Value using max(): "<<maxValue<<endl;
    // cout<<"Minimum Value using min(): "<<minValue<<endl;


    // 3rd approach- solving the problem
    int arr[]={-3,-2,-5,-10,-15};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxValue=INT_MIN;
    int minValue=INT_MAX;

    for(int i=1;i<n;i++){
     maxValue=max(maxValue,arr[i]);
     minValue=min(minValue,arr[i]);

    }
    cout<<"Maximum Value using max(): "<<maxValue<<endl;
    cout<<"Minimum Value using min(): "<<minValue<<endl;

}