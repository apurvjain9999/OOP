#include<iostream>

using namespace std;

class Cons
{
    public:
            int a;
            Cons()
            {
                a = 0;
            }
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
    const Cons c2;
    c2.cons();
    cout<<"Constant Function "<<c2.a<<endl;
    //c2.noCons(); Error
    return 0;
}
