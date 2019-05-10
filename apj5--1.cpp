//Apurv Jain
//2017KUCP1016
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Hour24
{
    private:
        int hr;
        int mi;

    public:
        class TimeFormatMistake
        {
            public:
                string ss;
                TimeFormatMistake(string s)
                {
                    ss=s;
                }
        };

        Hour24()
        {
            hr=0;
            mi=0;
        }

        void get();
};

void Hour24 :: get()
{
    string s1;
    int h;
    int m;
    char a[3];
    string s2;
    cout<<"Enter time in 24-hour notation: ";
    cin>>s1;
    s2=s1.substr(0,2);
    s2.copy(a,s2.size()+1);
    h=atoi(a);
    s2=s1.substr(3,2);
    s2.copy(a,s2.size()+1);
    m=atoi(a);
    if(h>=0 && h<24 && m>=0 && m<60 && s1[2]==':' && s1.size()==5 && s1[0]>=48 && s1[0]<=57 && s1[1]>=48 && s1[1]<=57 && s1[3]>=48 && s1[3]<=57 && s1[4]>=48 && s1[4]<=57)
    {
        if(h>12)
        {
            hr=h-12;
            mi=m;
            cout<<"\nThat is the same as "<<hr<<":"<<mi<<" PM\n";
        }
        else
        {
            hr=h;
            mi=m;
            cout<<"\nThat is the same as "<<hr<<":"<<mi<<" AM\n";
        }
    }
    else
    {
        throw TimeFormatMistake(s1);
    }
}

int main()
{
    Hour24 h;
    char ch;
    do
    {
        ch='y';
        try
        {
            h.get();
            cout<<"\nAgain?(y/n)";
            cin>>ch;
        }
        catch(Hour24::TimeFormatMistake t)
        {
            cout<<"\nPlease enter correct Time values "<<t.ss<<"\nTry Again: ";
        }

    }while(ch=='y' || ch=='Y');

    cout<<"\nEnd\n";
}
