#include <iostream>
#include <string>
using namespace std;
void generateBinary(int num,string out){
    if(num==0){
        cout<<out<<endl;
        return;
    }
    generateBinary(num-1,out+"0");
    generateBinary(num-1,out+"1");
}
int main() {
    cout << "Binary Strings of length 3:"<<endl;
    generateBinary(3,"");
}
