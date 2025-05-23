#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2(5);
    vector<int> vec3(4,3);
    vector<int> vec4(vec3);

    vector<vector<int>> v1;
    vector<vector<int>> v2(3, vector<int>(4));
    vec1.push_back(6);
    vec1.pop_back();

    vec1.insert(vec1.begin(), 3);
    vec1.erase(vec1.begin());
}