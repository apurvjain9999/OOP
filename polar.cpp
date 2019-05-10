#include<iostream>
#include<math.h>
using namespace std;

class Polar{
    private:
        float r;
        float theta;
    public:
        Polar()
        {
            r=0;
            theta=0;
        }
        Polar(float f1,float f2)
        {
            r=f1;
            theta=f2;
        }
        void show()
        {
            cout<<"\nPolar Co-ordinates are ("<<r<<","<<theta<<")\n";
        }
        float getr()
        {
            return r;
        }
        float gettheta()
        {
            return theta;
        }
};

class Rectangle{
    private:
        float x;
        float y;
    public:
        Rectangle()
        {
            x=0;
            y=0;
        }
        Rectangle(float fl1,float fl2)
        {
            x=fl1;
            y=fl2;
        }
        Rectangle(Polar &p)
        {
           float r1=p.getr();
           float theta1=p.gettheta();
           x=r1*cos(theta1);
           y=r1*sin(theta1);
        }
        void show()
        {
            cout<<"\nRectangular Co-ordinates are ("<<x<<","<<y<<")\n";
        }
        operator Polar()
        {
            return Polar(sqrt(pow(x,2)+pow(y,2)),atan(y/x));
        }
};

int main()
{
    Rectangle r1(3,4),r2;
    Polar p1,p2(3,3.14);
    r1.show();
    p1=r1;
    p1.show();
    cout<<"\n\n";
    p2.show();
    r2=p2;
    r2.show();
}
