#include<iostream>
using namespace std;
int main(){
    int marks=110;
    if(marks>=0 && marks<=100){
         if(marks>=90){
        cout<<"Grade A";
    }else if(marks>=80){
         cout<<"Grade B";
    }else if(marks>=60){
         cout<<"Grade C";
    }else{
        cout<<"Fail";
    }
    }else{
        cout<<"Invalid Marks";
    }
}