#include<iostream>
using namespace std;

int main()
{
    char ch[15];
    cout<<"Enter a line"<<endl;
    cin.getline(ch,15,'%');
    cout.write((char*)&ch,sizeof(ch));
    cout<<endl<<"Enter a line again"<<endl;
    cin.ignore();
    cin.getline(ch,20);
    cout.write((char*)&ch,sizeof(ch));
    return 0;
}
