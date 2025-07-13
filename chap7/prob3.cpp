#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    queue<string> q1;
    queue<string> q2;
    for(int i=0; i<cards1.size();i++){
        q1.push(cards1[i]);
    }
    for(int i=0; i<cards2.size();i++){
        q2.push(cards2[i]);
    }
    for(int i=0;i<goal.size();i++){
        if(q1.front()==goal[i]){
            cout<<q1.front()<<endl;
            q1.pop();
        }else if(q2.front()==goal[i]){
                cout<<q2.front()<<endl;

            q2.pop();
        }else{
            return "No";
        }
    }
    return "Yes";
}