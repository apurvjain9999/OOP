#include<iostream>

using namespace std;

void consFun(int &,const int &);

int main()
{
    int x=5,y=10;

    return 0;
}

void consFun(int &a,const int &b)
{
    a=15;
    //b=20; Error
}
