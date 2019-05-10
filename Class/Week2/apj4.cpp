#include<iostream>
using namespace std;

void swapp1(int a, int b) //Call by Value
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nValues after swapping are : "<<a<<","<<b;
}

void swapp2(int *a, int *b)  //Call by Pointer
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nValues after swapping are : "<<*a<<","<<*b;
}

void swapp3(int &a, int &b)  //Call by Reference
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nValues after swapping are : "<<a<<","<<b;
}

int main()
{
    int x,y;
    cout<<"********** Enter Numbers ************";
    cout<<"\nEnter value of x : ";
    cin>>x;
    cout<<"Enter value of y : ";
    cin>>y;
    cout<<"*************************************";
    cout<<"\nInitial Values are : "<<x<<","<<y;
    cout<<"\n-------------------------------------";
    cout<<"\nCall By Value";
    swapp1(x,y);
    cout<<"\n*************************************";
    cout<<"\nValues after Call by Value : "<<x<<","<<y;
    cout<<"\nValues are NOT Swapped !!!!";
    cout<<"\n-------------------------------------";
    cout<<"\nCall By Pointer";
    swapp2(&x,&y);
    cout<<"\n*************************************";
    cout<<"\nValues after Call by Pointer : "<<x<<","<<y;
    cout<<"\nValues are Swapped !!!!";
    cout<<"\n--------------------------------------";
    cout<<"\nCall By Reference";
    swapp3(x,y);
    cout<<"\n*************************************";
    cout<<"\nValues after Call by Reference : "<<x<<","<<y;
    cout<<"\nValues are again Swapped !!!!";
    cout<<"\n------------ Thank You --------------";
    return 0;
}
