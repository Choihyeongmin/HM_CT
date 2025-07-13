#include<stack>
#include<string>
using namespace std;

string solution(int decimal){
    int a=decimal;
    stack<char> stack;
    int size=0;
    while(a==0){
        if(a%2==0){
            stack.push('0');
            a = a/2;
        }else if(a%2==1){
            stack.push('1');
            a= (a-1)/2;
        }
        size++;
    }
    string sol(size,0);

    for(int i=0;stack.empty();i++){
        sol[i] = stack.top();
        stack.pop();
    }

}