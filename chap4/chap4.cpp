#include<iostream>
#include<string>

using namespace std;

int main()
{
    // int a = 60;
    // float b = 3.7f;
    // cout << a+b <<endl;
    // cout << static_cast<int>(b) + a << endl;
    string str1 = "Hello world";
    string str2;
    string str3(str1);
    string str4(str1, 0, 5);
    string str5(10, '*');

    size_t pos1 = str1.find("Hello");
    cout << pos1 << endl;
    string str6 = str2 + "Hi";
    cout << str6 << endl;
    size_t pos2 = str1.find("hello");
    cout<<pos2<<endl;
}