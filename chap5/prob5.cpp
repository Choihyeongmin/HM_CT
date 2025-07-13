//문제5. 행렬의 곱셈 / 프로그래머스 12949
#include<vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2){
    int a = arr1.size();
    int b = arr2.size();
    int c = arr2[0].size();
    vector<vector<int>> sol(a, vector<int>(c,0));
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            int x =0;
            for(int k=0;k<b;k++){
                x = x + arr1[i][k]*arr2[k][j];
            }
            sol[i][j] = x;
        }
    }
    return sol;
}