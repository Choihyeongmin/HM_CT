//프로그래머스 12937
#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    stack<char> stack;
    for(int i=0;i<s.size();i++){
        //이 조건 없으면 메모리 오류 날 가능성 있음.
        if(stack.empty()){
            stack.push(s[i]);
            continue;
        }
        if(stack.top()==s[i]){
            stack.pop();
        }else{
            stack.push(s[i]);
        }
    }
    if(stack.empty()){
        return 1;
    }else{
        return 0;
    }
}