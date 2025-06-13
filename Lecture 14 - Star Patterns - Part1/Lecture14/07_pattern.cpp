#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;
    for(int i=0;i<rows;i++){
        char ch=i+'A';
        for(int j=1;j<=cols;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}