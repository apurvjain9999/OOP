#include<iostream>

using namespace std;
//Apurv Jain CSE 3rd Sem
//2017KUCP1016
class apurv
{
    private:
            int a;
            apurv()
            {
                cout<<"Inside Constructor"<<endl;
                a = 5;
            }
    public:
            static apurv apurv1();
            void display();
};

apurv apurv :: apurv1()
{
    cout<<"Calling Constructor"<<endl;
    return apurv();
}

void apurv :: display()
{
    cout<<"Value of a : "<<a<<endl;
}
int main()
{
    cout<<"----------- Program to Create Object using Private Constructor ------------"<<endl;
    apurv a1 = apurv :: apurv1();
    a1.display();
    cout<<"------------------------------- Thank You! --------------------------------";
    return 0;
}
