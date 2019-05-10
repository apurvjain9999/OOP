#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;

int main()
{
    fstream fs1,fs2;
    fs1.open("1.txt",ios::in);
    fs2.open("2.txt",ios::out);
    char ch;
    while(fs1)
    {
        fs1.get(ch);
        ch = tolower(ch);
        fs2.put(ch);
    }
    fs1.close();
    fs2.close();
    return 0;
}

