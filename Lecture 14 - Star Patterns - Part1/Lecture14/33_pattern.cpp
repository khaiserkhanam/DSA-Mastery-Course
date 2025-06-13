#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;

    for(int i=1;i<=rows;i++){
        //spaces
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
        
    }
}