#include <iostream>
using namespace std;
int main(){
         int num;
    cout<<"Enter rows: "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        //1st triangle - space
        for(int s=1;s<=num-i;s++){
            cout<<" ";
        }
        //2nd triangle 
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // 3rd triangle
        for(int k=i-1;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
}