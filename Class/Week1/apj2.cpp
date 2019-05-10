#include<iostream>

using namespace std;

class HumanBeing
{
    public:

        void display()
        {
            cout<<"Inside member function";
        }
};

int main()
{
    HumanBeing obj;
    obj.display();


    return 0;
}
