#include<iostream>

using namespace std;
//Apurv Jain CSE 3rd Sem
//2017KUCP1016
class test1
{
    private:
        char subject1[15];
        int max_marks1;

    public:
        void getData1();
        void display1();
        friend void swapp();
};

void test1 :: getData1()
{
    cout<<"\nEnter Name of the Subject : ";
    //cin.ignore();
    cin.get(subject1,15);
    cout<<"Enter Maximum Marks of the Test : ";
    cin>>max_marks1;
    cout<<endl;
}

void test1 :: display1()
{
        cout<<endl;
        cout<<"\n------------ DETAILS OF TEST1 -----------"<<endl;
        cout<<"\nSubject Name  : "<<subject1<<endl;
        cout<<"Maximum Marks : "<<max_marks1;
}

class test2
{
    private:
        char subject2[15];
        int max_marks2;

    public:
        void getData2();
        void display2();
        friend void swapp();
};

void test2 :: getData2()
{
    cout<<"\nEnter Name of the Subject : ";
    cin.ignore();
    cin.get(subject2,15);
    cout<<"Enter Maximum Marks of the Test : ";
    cin>>max_marks2;
    cout<<endl;
}

void test2 :: display2()
{
        cout<<endl;
        cout<<"\n------------ DETAILS OF TEST2 -----------"<<endl;
        cout<<"\nSubject Name  : "<<subject2<<endl;
        cout<<"Maximum Marks : "<<max_marks2;
}

void swapp()
{
    test1 t1;
    cout<<"Enter Details of Test 1 "<<endl;
    t1.getData1();

    test2 t2;
    cout<<"Enter Details of Test 2 "<<endl;
    t2.getData2();

    cout<<"\nDetails of Test 1 and Test 2 before Swapping"<<endl;
    t1.display1();
    t2.display2();

    int temp=0;
    temp=t1.max_marks1;
    t1.max_marks1=t2.max_marks2;
    t2.max_marks2=temp;

    cout<<"\nDetails of Test 1 and Test 2 after Swapping"<<endl;
    t1.display1();
    t2.display2();

    cout<<"\n\nFriend Function has swapped the Maximum Marks for Test 1 and Test 2 !!!!"<<endl;
}

int main()
{
    swapp();
    return 0;
}
