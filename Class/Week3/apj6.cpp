#include<iostream>
using namespace std;

int main()
{
    cout.width(5);
    cout<<54<<" "<<33<<endl;
    cout.width(5);
    cout.fill('#');
    cout.width(5);
    cout<<54<<endl;
    cout<<1.4134<<endl;
    cout.precision(4);
    cout<<1.4134<<endl;
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout<<5.2;
    return 0;
}
