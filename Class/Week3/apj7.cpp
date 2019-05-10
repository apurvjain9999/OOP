#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fs1;
    fs1.open("1.txt",ios::in);
    int M = 100;
    char buffer[M];
    while(fs1)
    {
        fs1.getline(buffer,M);
        cout<<buffer<<endl;
    }
    fs1.close();
    return 0;
}
