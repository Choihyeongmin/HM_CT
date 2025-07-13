#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1;
    string str2 = "Hello world";
    string str3(str2);
    string str4(str2,0,5);
    string str5(10, '*');
    size_t pos1 = str2.find("Hello");
}