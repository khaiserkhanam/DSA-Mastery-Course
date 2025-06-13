#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;

    for(int i=1;i<=rows;i++){
      if(i%2!=0){
        //odd row
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
      }else{
        //even
        for(int j=0;j<i;j++){
            cout<<char('A'+j)<<" ";
        }
      }
      cout<<endl;
    }
}