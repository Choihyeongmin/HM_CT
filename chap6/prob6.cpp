#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(int n, int k, vector<string> cmd) {
    string answer(n,'O');
    vector<int> vec(n);
    stack<pair<int,int>> s;
    for(int i=0;i<vec.size();i++){
        vec[i] = i;
    }
    for(int i=0; i<cmd.size();i++){
        if(cmd[i][0]=='D'){
            k += stoi(cmd[i].substr(2));
        }else if(cmd[i][0]=='U'){
            k += stoi(cmd[i].substr(2));
        }else if(cmd[i][0]=='C'){
            s.push({k,vec[k]});
            for(int j=k;j<n-1;j++){
                vec[j] = vec[j+1];
            }
        }else if(cmd[i][0]=='Z'){
            for(int j=s.top().first;j<n-1;j++){
                vec[j+1] = vec[j];
            }
            vec[s.top().first] = s.top().second;
            s.pop();
        }
    }
    while(!s.empty()){
        answer[s.top().second] = 'X';
        s.pop();
    }
    return answer;
}