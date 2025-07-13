//문제4. 모의고사 / 프로그래머스 42840
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> A = {1,2,3,4,5};
vector<int> B = {2,1,2,3,2,4,2,5};
vector<int> C = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers){
    vector<int> correct(3,0);
    vector<int> sol;
    correct[0] = correctA(answers);
    correct[1] = correctB(answers);
    correct[2] = correctC(answers);
    int max = *max_element(correct.begin(), correct.end());
    for(int i=0;i<3;i++){
        if(correct[i]==max){
            sol.push_back(i+1);
        }
    }
    return sol;
}
int correctA(vector<int> answers){
    int m;
    int correct;
    for(int i=0;i<answers.size();i++){
        m = i%5;
        if(answers[i]==A[m]){
            correct++;
        }
    }
    return correct;
}
int correctB(vector<int> answers){
    int m;
    int correct;
    for(int i=0;i<answers.size();i++){
        m = i%8;
        if(answers[i]==B[m]){
            correct++;
        }
    }
    return correct;
}
int correctC(vector<int> answers){
    int m;
    int correct;
    for(int i=0;i<answers.size();i++){
        m = i%10;
        if(answers[i]==C[m]){
            correct++;
        }
    }
    return correct;
}