#include <iostream>
using namespace std;


int main() {
int arr[10]={10,20,30};
cout<<arr<<endl;
cout<<arr[0]<<endl;
cout<<&arr[0]<<endl;
cout<<*arr<<endl;
cout<<arr+1<<endl;
cout<<*(arr+1)<<endl;
cout<<*arr+1<<endl;
//error
// arr=arr+1;

int *ptr=arr;
cout<<ptr<<endl;
// *ptr=*ptr+1;
// cout<<*ptr<<endl;
// cout<<arr[0]<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
cout<<*ptr<<endl;

//size of pointer and array
cout<<sizeof(arr)<<endl;
cout<<sizeof(ptr)<<endl;

}
