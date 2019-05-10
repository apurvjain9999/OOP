#include<iostream>
#include<math.h>
using namespace std;
class B;
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
        A(B &obj)
        {
           a = obj.retx();
           b = obj.rety();
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
            int retx()
            {
                return x;
            }
            int rety()
            {
                return y;
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
    obj2 = obj1;
    obj2.show();
    return 0;
}
