#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    char ch='A';
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
           cout<<ch<<" ";
           ch++;
        }
        cout<<endl;
    }
}