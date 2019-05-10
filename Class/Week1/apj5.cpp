#include<iostream>

using namespace std;

void display()
{
   static int i=10;
   cout<<"Value of i = "<<i<<endl;
   i++;
}

int main()
{
    int count=0;
    int i;
    for(i=1;i<5;i++)
    {
        count++;
        cout<<"Function call "<<count<<endl;
        display();
    }
    return 0;
}
