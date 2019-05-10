#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    int d[100];
    ifstream if1("1.txt");
    int i =0;
    char ch;
    int y;
    cout<<ch;
    while(if1)
    {
        if1>>ch;
        cout<<ch;
        int x = (int)ch-48;
        cout<<x;

        /*if(x>=0 && x<=9)
        {
            d[i]=x;
            i++;
        }*/


    }
    /*for (int j = 0; j < i; j++)
        cout<<d[j];
*/
    return 0;
}
