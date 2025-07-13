//프로그래머스 76502
#include <string>
#include <vector>
#include <stack>

using namespace std;
bool check(string s){
    stack<char> stack;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            stack.push(s[i]);
        }else if(s[i]==')'){
            if(stack.top()!='('){
                return false;
            }else{
                stack.pop();
            }
        }else if(s[i]=='}'){
            if(stack.top()!='{'){
                return false;
            }else{
                stack.pop();
            }
        }else if(s[i]==']'){
            if(stack.top()!='['){
                return false;
            }else{
                stack.pop();
            }
        }
    }
    return stack.empty();
}

int solution(string s) {
    int answer = 0;
    int size = s.size();
    string s2(size, 0);
    for(int i=0;i<size;i++){
        for(int k=0;k<size;k++){
            s2[k] = s[(i+k)%size];
        }
        if(check(s2)){
            answer++;
        }
    }
    return answer;
}