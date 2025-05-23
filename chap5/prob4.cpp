#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int solA(vector<int> answers){
    vector<int> a = {1,2,3,4,5};
    int s1=0;
    for(int i =0; i<answers.size();i++){
        if(a[i%5] == answers[i]){
            s1++;
        }
    }
    return s1;
}
int solB(vector<int> answers){
    vector<int> b = {2,1,2,3,2,4,2,5};
    int s2=0;
    for(int i =0; i<answers.size();i++){
        if(b[i%8] == answers[i]){
            s2++;
        }
    }
    return s2;
}
int solC(vector<int> answers){
    vector<int> c = {3,3,1,1,2,2,4,4,5,5};
    int s3=0;
    for(int i =0; i<answers.size();i++){
        cout<<i%10<<endl;
        if(c[i%10] == answers[i]){
            s3++;
        }
    }
    return s3;
}
vector<int> solution(vector<int> answers){
    vector<int> sol;
    vector<int> answer;
    sol.push_back(solA(answers));
    sol.push_back(solB(answers));
    sol.push_back(solC(answers));
    for(int i:sol){
        cout<<i<<endl;
    }
    int best = *max_element(sol.begin(), sol.end());
    for(int i=0;i<3;i++){
        if(sol[i]==best){
            answer.push_back(i+1);
        }
    }
    return answer;
}