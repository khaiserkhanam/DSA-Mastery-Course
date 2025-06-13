#include <iostream>
using namespace std;
int main(){
       int rows,cols;
    cout<<"Enter rows: "<<endl;
    cin>>rows;
     cout<<"Enter columns: "<<endl;
    cin>>cols;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(i==0 || i==rows-1 || j==0 || j==cols-1){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

      for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}