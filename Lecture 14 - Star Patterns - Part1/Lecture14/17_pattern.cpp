#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
           cout<<j<< " ";
        }
        cout<<endl;
    }
}