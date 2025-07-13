#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    unordered_map<string, int> hp;
    if(words[0].size()<2){
        answer.push_back(1);
        answer.push_back(1);
        return answer;
    }
    hp[words[0]]++;
    for(int i=1;i<words.size();i++){
        if(words[i].size()<2){
            int a = (i%n)+1;
            answer.push_back(a);
            answer.push_back((int(i/n))+1);   
            return answer;
        }
        else if(words[i-1][(words[i-1].size()-1)] != words[i][0]){
            int a = (i%n)+1;
            answer.push_back(a);
            answer.push_back((int(i/n))+1);
            return answer;
        }else if(hp[words[i]]==1){
            int a = (i%n)+1;
            answer.push_back(a);
            answer.push_back((int(i/n))+1);
            return answer;
        }
        hp[words[i]]++;
    }
    if(answer.empty()){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}