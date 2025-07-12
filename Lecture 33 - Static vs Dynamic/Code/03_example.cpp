#include <iostream>
using namespace std;
int sumdigit(int *ptr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=ptr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;

   int *ptr= new int[n];
   for(int i=0;i<n;i++){
    cin>>ptr[i];
   }
//    cout<<endl;
//      for(int i=0;i<n;i++){
//     cout<<ptr[i];
//    }
int answer=sumdigit(ptr,n);
cout<<"Answer :"<< answer;
}