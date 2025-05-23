#include<vector>
    #include<algorithm>

using namespace std;

vector<int> solution(vector<int> numbers){
    vector<int> out;
    for(auto i=numbers.begin(); i != numbers.end(); i++){
        for(auto j=i+1; j!=numbers.end();j++){
            out.push_back(*i+*j);
        }
    }
    out.erase(unique(out.begin(), out.end()),out.end());
    sort(out.begin(), out.end());
    return out;
}
//iterator는 주소를 가지고 있어 '*'로 접근해야됨
//index로 접근하려면 int i=0;i<vec.size();i++