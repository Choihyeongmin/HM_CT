#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    int pSize = participant.size();
    int cSize = completion.size();
    unordered_map<string, int> hash;
    for(int i=0;i<pSize;i++){
        hash[participant[i]]++;
    }
    for(int i=0;i<cSize;i++){
        hash[completion[i]]--;
        if(hash[completion[i]]==0){
            hash.erase(completion[i]);
        }
    }
    return hash.begin()->first;
}