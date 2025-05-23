#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> solution(vector<int> lst){
    unique(lst.begin(), lst.end());
    sort(lst.rbegin(), lst.rend());
    return lst;
}