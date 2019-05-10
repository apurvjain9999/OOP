#include<iostream>
using namespace std;
class A
{
    int a;
    int b;

    public:
        void operator = (int t)
        {
            a = t;
            b = t;
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
    return 0;
}
