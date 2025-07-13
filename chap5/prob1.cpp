//문제1. 배열정렬하기
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
}