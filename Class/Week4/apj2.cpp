#include<iostream>
using namespace std;
class A
{
    int a,b;

    public:
        A()
        {
            a = 0;
            b = 0;
        }
        A(int x)
        {
            a = x;
            b = x;
        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    A obj;
    int x = 10;
    obj = x;
    obj.show();
}
