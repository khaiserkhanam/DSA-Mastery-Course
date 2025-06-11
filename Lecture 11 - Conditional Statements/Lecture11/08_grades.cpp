#include<iostream>
using namespace std;
int main(){
    int marks=60;
    if(marks>=90){
        cout<<"Grade A";
    }else if(marks>=80){
         cout<<"Grade B";
    }else if(marks>=60){
         cout<<"Grade C";
    }else{
        cout<<"Fail";
    }
}