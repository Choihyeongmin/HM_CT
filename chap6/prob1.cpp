#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool solution(string s){
    stack<char> stack;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            stack.push('(');
        }else if(s[i]==')'){
            if(stack.empty()){
                return false;
            }
            stack.pop();
        }
    }
    if(!stack.empty()){
        return false;
    }
    return true;
}