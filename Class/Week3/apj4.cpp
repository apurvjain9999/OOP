#include<iostream>
using namespace std;

int main()
{
    char c;
    char ch[20];
    cout<<"Enter a line "<<endl;
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        cin.get(c);
    }
    cout<<endl<<"Enter a line again"<<endl;
    cin.getline(ch,20);
    cout.write((char*)&ch,sizeof(ch));
    return 0;
}
