#include<iostream>

// Apurv Jain 2017KUCP1016
// CSE 3rd Sem A1

using namespace std;

class Complex
{
    private:
        int real;
        int img;

    public:
        Complex() //Default Constructor
        {
            real=0;
            img=0;
        }
        Complex(int x)  //Parametrized Constructor for same values
        {
            real=x;
            img=x;
        }
        Complex(int x,int y)    //Parametrized Constructor for different values
        {
            real=x;
            img=y;
        }
        friend Complex add(Complex &, Complex &);
        friend void display(Complex &);
};

Complex add(Complex &x, Complex &y)
{
    Complex z;
    z.real=x.real+y.real;
    z.img=x.img+y.img;
    return z;
}

void display(Complex &z)
{
    if(z.img>=0)
        cout<<z.real<<" + i"<<z.img<<endl;
    else
        cout<<z.real<<" - i"<<-(z.img)<<endl;
}

bool same(int,int);

int main()
{
    int a,b;
    cout<<"---------------- Program to Add two Complex Numbers -------------------"<<endl;
    cout<<"\nEnter the First Complex Number"<<endl;
    cout<<"\nEnter the Real Part : ";
    cin>>a;
    cout<<"\nEnter the Imaginary Part : ";
    cin>>b;
    Complex obj1=same(a,b)?Complex(a):Complex(a,b);
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"\n\nThe First Complex Number is : ";
    display(obj1);
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"\nEnter the Second Complex Number"<<endl;
    cout<<"\nEnter the Real Part : ";
    cin>>a;
    cout<<"\nEnter the Imaginary Part : ";
    cin>>b;
    Complex obj2=same(a,b)?Complex(a):Complex(a,b);
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"\n\nThe Second Complex Number is : ";
    display(obj2);
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"\nAdding Both the Complex Numbers"<<endl;
    Complex obj3;
    obj3=add(obj1,obj2);
    cout<<"\nThe Resultant Complex Number is : ";
    display(obj3);
    cout<<"-------------------------- Thank You! ---------------------------------"<<endl;
    return 0;
}

bool same(int x,int y)
{
    if(x==y)
        return true;
    else
        return false;
}
