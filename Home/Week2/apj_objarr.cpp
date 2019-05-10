#include<iostream>

using namespace  std;
//Apurv Jain CSE 3rd Sem
//2017KUCP1016
class StudentCse
{
    private:

        char name[20];
        int age;
        int roll_no;

    public:

        void getData();
        void display();
};
void StudentCse :: getData()
{
    cout<<"Enter Name    : ";
    cin.ignore();
    cin.get(name,20);
    cout<<"Enter Age     : ";
    cin>>age;
    cout<<"Enter Roll No : ";
    cin>>roll_no;
}

void StudentCse :: display()
{
    cout<<"Name    : "<<name;
    cout<<"\nAge     : "<<age;
    cout<<"\nRoll no : "<<roll_no;
}

int main()
{
    int rec;
    cout<<"Enter the number of records to be entered: ";
    cin>>rec;
    StudentCse obj[rec];
    int i;
    cout<<"\n------------------------------------------\n";

    for(i=0;i<rec;i++)
    {
        cout<<endl<<"Enter records of Student"<<i+1<<endl;
        obj[i].getData();
    }

    cout<<"\n------------------------------------------\n";

    for(i=0;i<rec;i++)
    {
        cout<<endl<<"Records of Student"<<i+1<<endl;
        obj[i].display();
        cout<<endl;
    }
    return 0;
}
