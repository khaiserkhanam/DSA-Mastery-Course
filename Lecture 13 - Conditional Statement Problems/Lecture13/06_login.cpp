#include<iostream>
using namespace std;
int main(){
   string username="admin",password="1234",loginUsername,loginPassword;
   cout<<"Enter Username : ";
   cin>>loginUsername;
   cout<<endl;
   cout<<"Enter Password : ";
   cin>>loginPassword;
   if(username==loginUsername && password==loginPassword){
    cout<<"Login successful";
   }else{
    cout<<"Invalid Credentials";
   }

}