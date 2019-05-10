#include<iostream>
using namespace std;

class Complex
{
    float real;
    float img;

    public:

        Complex()
        {
            cout<<"Constructor with No Arguments"<<endl;
            real = 0.0;
            img = 0.0;
        }

        Complex(float sm)
        {
            cout<<"Constructor with One Argument"<<endl;
            real = sm;
            img = sm;
        }

        Complex(float x, float y)
        {
            cout<<"Constructor with Two Arguments"<<endl;
            real = x;
            img = y;
        }

        friend void display(Complex);
        friend Complex sum(Complex , Complex);
};

void display(Complex a)
{
    cout<<"Complex Number = "<<a.real;
    if (a.img<0)
        cout<<"";
    else
        cout<<"+";
    cout<<a.img<<endl;
}

Complex sum(Complex x, Complex y)
{
   float r =  x.real + y.real;
   float i = x.img + y.img;
   return Complex(r,i);
}

int main()
{
    Complex c1(2.2);
    display(c1);
    Complex c2(1.2,-3.5);
    display(c2);
    Complex c3;
    display(c3);
    c3 = sum(c1,c2);
    display(c3);
    return 0;
}
