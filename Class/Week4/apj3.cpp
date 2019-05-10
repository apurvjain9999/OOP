#include<iostream>
using namespace std;
class A
{
    int a,b;

    public:
        A()
        {
            a = 10;
            b = 20;
        }
        operator int()
        {
            return a+b;
        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    A obj;
    obj.show();
    int x;
    x = obj;
    cout<<x<<endl;
    return 0;
}

