#include<iostream>
#include<math.h>
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
        A(int s,int t)
        {
            a = s;
            b = t;
        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }
};
class B
{
    int x,y;

    public:
            B()
            {
                x = 10;
                y = 20;
            }
            operator A()
            {
                return A(x,y);
            }
            void show()
            {
                cout<<x<<" "<<y<<endl;
            }
};
int main()
{
    A obj1;
    B obj2;
    obj1.show();
    obj2.show();
    obj1 = obj2;
    obj1.show();
    return 0;
}
