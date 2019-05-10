#include<iostream>
#include<fstream>

using namespace std;
//Apurv Jain CSE 3rd Sem
//2017KUCP1016
int main()
{
    char str[50];
    ifstream ifs1, ifs2;
    ifs1.open("file.txt");
    ifs2.open("file1.txt");
    cout<<"----------- Program to Read two files Simultaneously ----------"<<endl;
    while(ifs1.eof()==0 || ifs2.eof()==0)
    {
        if(ifs1.eof()==0)
        {
            ifs1.getline(str,50);
            cout<<str<<endl;
        }

        if(ifs2.eof()==0)
        {
            ifs2.getline(str,50);
            cout<<str<<endl;
        }
    }
    cout<<"----------------------- Thank You! ---------------------------"<<endl;
    return 0;
}
