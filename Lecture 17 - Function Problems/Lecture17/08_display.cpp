#include<iostream>
using namespace std;
void displayNumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
 int n;
 cout<<"enter n: ";
 cin>>n;
 if(n<=0){
    cout<<"Please enter positive number";
    return 1;
 }
 displayNumbers(n);
 displayNumbers(n);
 displayNumbers(n);

}