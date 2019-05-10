#include<iostream>
using namespace std;

class test
{
    private:

            int num;

    public:

            void getNum();
            void display();
            friend void show(test);
};

void test :: getNum()
{
    cout<<"\nEnter data : ";
    cin>>num;
}

void test :: display()
{
    cout<<num;
}

void show(test obj2)
{
    obj2.num=20;
    cout<<"\nValue of num in obj2 : "<<obj2.num;
}

int main()
{
    test obj1;
    obj1.getNum();
    cout<<"\nValue of num in obj1 : ";
    obj1.display();
    show(obj1);
    cout<<"\nValue of num in obj1 : ";
    obj1.display();
    return 0;
}
