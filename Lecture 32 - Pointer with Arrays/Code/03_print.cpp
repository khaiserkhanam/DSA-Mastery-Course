#include <iostream>
using namespace std;

void print(int arr[]){
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
}
int main() {
int arr[5]={10,20,30,40,50};
// print(arr);
print(arr+2);


}
