#include <iostream>
#include <string>
using namespace std;

void balancedParentheses(int open, int close,string out){
 if(open==0 && close==0){
    cout<<out<<endl;
    return;
 }
 if(open>0) balancedParentheses(open-1,close,out+"(");
 if(close>open) balancedParentheses(open,close-1,out+")");
}

int main() {
    cout << "Balanced Parentheses for n=3:"<<endl;
    balancedParentheses(3,3,"");
}
