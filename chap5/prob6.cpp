#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
bool compare(pair<int, double>& a, pair<int, double> &b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N,vector<int>stages)
{   
    vector<pair<int, double>> A(N);
    vector<int> answer;
    sort(stages.rbegin(), stages.rend());
    for(int i=0;i<N;i++){
        int target = stages[stages.size()-1];
        int n=0;
        int stagesNum = stages.size();
        if(target==i+1){
            while((stagesNum-n-1)>=0&&target==stages[stagesNum-n-1]){
                stages.pop_back();
                n++;   
            }
        }   
        A[i].first = i+1;
        A[i].second = n / (double)stagesNum;
    }
    sort(A.begin(), A.end(), compare);
    for(int i = 0; i<N; i++){
        cout<<A[i].second<<endl;
        answer.push_back(A[i].first);
    }
    return answer;
}