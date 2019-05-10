#include<iostream>
#include<string.h>

using namespace std;

class MusicalInstrument
{
    private:

        char name[20];
        char type[20];
        char company[20];

        void getName(char name[20]);
        void getType(char type[20]);
        void getCompany(char company[20]);


    public:

        void details()
        {
            char name[20];
            char type[20];
            char company[20];
            cout<<"Enter the details of the instrument"<<endl;
            cout<<"Enter name: "<<endl;
            cin>>name;
            getName(name);
            cout<<"Enter type: "<<endl;
            cin>>type;
            getType(type);
            cout<<"Enter company: "<<endl;
            cin>>company;
            getCompany(company);
        }

        void display()
        {
            cout<<"------------------------------------"<<endl;
            cout<<"Name of the Instrument: "<<name<<endl;
            cout<<"Type: "<<type<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"------------------------------------"<<endl;
        }

};

void MusicalInstrument::getName(char name[20])
{
	strcpy(this->name,name);
}

void MusicalInstrument::getType(char type[20])
{
    strcpy(this->type,type);
}

void MusicalInstrument::getCompany(char company[20])
{
    strcpy(this->company,company);
}

int main()
{
    MusicalInstrument m1,m2,m3;

    m1.details();
    m2.details();
    m3.details();

    m1.display();
    m2.display();
    m3.display();

    return 0;
}
