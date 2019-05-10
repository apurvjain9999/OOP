#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class BankAccount
{
    private:

	char name[50];
	unsigned long int account_no;
	char account_type[15];
	long int balance;
	long int withdraw;

    public:

	void opbal();
	void display();

};

void BankAccount :: opbal()
{
    cout<<"\nEnter Name :-";
    cin.ignore();
    cin.getline(name,50);
    cout<<"Enter A/c no. :-";
    cin>>account_no;
    cout<<"Enter A/c type :-";
    cin>>account_type;
    cout<<"Enter Opening Balance:-";
    cin>>balance;
}
void BankAccount :: display()
{
    cout<<"\nname "<<name<<endl;
    cout<<"A/c. No "<<account_no<<endl;
    cout<<"A/c Type "<<account_type<<endl;
    cout<<"Balance "<<balance<<endl;
}

int main()
{
    int n;
    cout<<"\nenter how many records ";
    cin>>n;
    BankAccount *obj=new BankAccount[n];
    int i;
    for(i=0;i<n;i++)
    {
        obj[i].opbal();
    }
    cout<<"\n         \"DETAILS\" ";
    for(i=0;i<n;i++)
    {
        obj[i].display();
    }
    return 0;
}
