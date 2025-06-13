#include<iostream>
using namespace std;
int main(){
    cout<<"Uppercase Letters (A-Z): "<<endl;
    for(char ch='A' ;ch<='Z';ch++){
        cout<<int(ch)<<"-->"<<ch<<endl;
    }

     cout<<"Lowercase Letters (a-z): "<<endl;
    for(char ch='a' ;ch<='z';ch++){
        cout<<int(ch)<<"-->"<<ch<<endl;
    }
}