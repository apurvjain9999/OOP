#include<iostream>

using namespace std;

class Cons
{
    public:
            int a;
            void noCons()
            {
                a = 2;
            }

            void cons() const
            {
                cout<<"Constant Function"<<endl;
                //a = 5; Error
            }
};

int main()
{
    Cons c1;
    c1.noCons();
    cout<<"Normal Function "<<c1.a<<endl;
    //c1.cons(); Error
    return 0;
}
