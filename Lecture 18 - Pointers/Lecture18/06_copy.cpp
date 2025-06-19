#include <iostream>
using namespace std;
int main(){
// int n=10;
// int a=n;
// cout<<"Before : "<<n<<endl;
// a++;
// cout<<"After : "<<n<<endl;

// int * ptr1=&n;
// cout<<"Before : "<<n<<endl;
// (*ptr1)++;
// cout<<"After : "<<n<<endl;

// int* ptr2=ptr1;
// cout<<ptr2<<endl;
// cout<<ptr1<<endl;
// cout<<*ptr2<<endl;
// cout<<*ptr1<<endl;
// (*ptr2)++;
// cout<<*ptr2<<endl;
// cout<<*ptr1<<endl;

//Example2
int x=5;
int* ptr=&x;
cout<<*ptr<<endl;
(*ptr)++;
cout<<*ptr<<endl;
cout<<x<<endl;
cout<<ptr<<endl;
cout<<&x<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
cout<<&x<<endl;
cout<<*ptr<<endl;
}
