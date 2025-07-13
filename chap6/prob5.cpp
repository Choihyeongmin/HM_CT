//프로그래머스 64061
#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    int size = prices.size();
    vector<int> answer(size, 0);
    stack<int> stack;
    for(int i=0;i<size;i++){
        while(!stack.empty()&&prices[i] < prices[stack.top()]){
            answer[stack.top()] = i - stack.top();
            stack.pop();
        }
        stack.push(i);
    }
    while(!stack.empty()){
        answer[stack.top()] = (size-1) - stack.top();
        stack.pop();
    }
    return answer;
}