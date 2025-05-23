#include<iostream>
#include<set>

//set은 중복허용X, 들어가는 즉시 정렬(내부적으로는 binary search tree)
using namespace std;

int main()
{
    set<int> s1;
    set<int> s2 ={1,2,5,3,2,8};
    set<int> s3(s2);

    for(int i: s2){
        cout<<i<<endl;
    }

    auto pos = s2.find(5);
    cout<<*pos<<endl;
}