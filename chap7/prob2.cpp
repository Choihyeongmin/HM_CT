#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int size = progresses.size();
    vector<int> left(size);
    int count=0;
    for(int i=0; i<size;++i){
        left[i] = ceil((100.0-progresses[i])/speeds[i]);
    }
    int max = left[0];
    for(int i=0;i<size;++i){
        if(left[i] <= max){
            count++;
        }else {
            answer.push_back(count);
            count =1;
            max = left[i];
        }
    }
    
    answer.push_back(count);
    return answer;
}