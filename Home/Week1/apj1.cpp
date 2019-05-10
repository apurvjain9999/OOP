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
	void deposit();
	void withdraw_amount();
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

void BankAccount :: deposit()
{
    long int deposit;
    cout<<"\nEnter Deposit amount :-";
    cin>>deposit;
    balance+=deposit;
    cout<<"Deposit Balance ="<<balance<<endl;
}

void BankAccount :: withdraw_amount()
{
    long int wd;
    cout<<"\nBalance Amount ="<<balance<<endl;
    cout<<"Enter Withdraw Amount :-";
    cin>>wd;
    if(wd<=balance)
    {
        withdraw=wd;
        balance-=wd;
        cout<<"After Withdraw Balance is "<<balance<<endl;
    }
    else
    {
        cout<<"Sorry! You do not have sufficient Balance"<<endl;
    }
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
    //clrscr();
    BankAccount obj;
    int ans=0;
    int flag=0;
    cout<<"\nChoice List"<<endl;
    cout<<"1)  To assign Initial Value"<<endl;
    cout<<"2)  To Deposit"<<endl;
    cout<<"3)  To Withdraw"<<endl;
    cout<<"4)  To Display All Details"<<endl;
    cout<<"5)  EXIT"<<endl;
    do
    {
        cout<<"    Enter your choice:-";
        cin>>ans;
        if (flag==0&&ans>1)
        {
            cout<<"\nSorry! You do not have a Bank Account with us";
            cout<<"\nFirst open your Bank Account"<<endl;
        }
        else
        {
            switch(ans)
            {
                case 1:
                    {
                        obj.opbal();
                        flag=1;
                    }
                break;

                case 2: obj.deposit();
                break;

                case 3: obj.withdraw_amount();
                break;

                case 4:
                    {
                        cout<<"\n  \"DETAILS\" ";
                        obj.display();
                    }
                break;

                case 5: cout<<"    Exit from programme control";
                break;

                default: cout<<"Wrong Choice!";
            }
        }
    }while(ans!=5);
    getch();
    return 0;
}
