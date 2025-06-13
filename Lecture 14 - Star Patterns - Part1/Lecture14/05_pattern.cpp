#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=0;j<cols;j++){
            // cout<<j+64<<" ";
            // cout<<char(j+64)<<" ";
            cout<<char(j+'A')<<" ";
        }
        cout<<endl;
    }
}