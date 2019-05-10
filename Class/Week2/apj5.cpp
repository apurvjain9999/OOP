#include<iostream>
using namespace std;

int num;

int& test();

int main()
{
    cout<<"num = "<<num<<endl;
    test()=5; // num=5;
    cout<<"num = "<<num<<endl;
    return 0;
}

int& test()
{
    return num;
}
