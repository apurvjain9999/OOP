#include<iostream>
using namespace std;
class Shape
{
    public:
    int size;
    virtual int area(int size ){}

};

class square: public Shape
{
public:
int r;
int area(int r)
{

    int temp = 3.14* r*r;
    return temp;
}
};
class circle: public Shape
{
    int r;
    public:
    int area(int r)
    {
        int temp = 3.14* r*r;
        cout<<"The area of circle is "<<temp;
    }

};
class triangle: public Shape
{
    public:
    int r;
    int area(int r)
    {
        
        int temp = r*r;
        return temp;
    }
};
int main()
{
    Shape *b= new circle();
    b->area(20);
return 0;
}