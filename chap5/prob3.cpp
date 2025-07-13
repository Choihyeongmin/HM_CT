//문제3. 두 수를 뽑아서 더하기 / 프로그래머스 68644
#include<iostream>
#include<set>
#include<vector>

using namespace std;

vector<int> solution(vector<int> numbers){
    set<int> set;
    for(int i=0;i<numbers.size()-1;i++){
        for(int k=i+1;k<numbers.size();k++)
        set.insert(numbers[i]+numbers[k]);
    }
    vector<int> sol(set.begin(), set.end());
    return sol;
}