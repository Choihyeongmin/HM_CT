#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2){
    int i1 = arr1.size();
    int j1 = arr1[0].size();
    int i2 = arr2.size();
    int j2 = arr2[0].size();

    vector<vector<int>> out(i1, vector<int>(j2, 0));

    for(int i=0;i<i1;i++){
        for(int k=0;k<j2;k++){
            for(int j=0;j<j1;j++){
                out[i][k] += (arr1[i][j] * arr2[j][k]);
            }
        }
    }
    return out;
}
