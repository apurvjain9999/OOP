//Apurv Jain
//2017KUCP1016
#include<iostream>
#include<fstream>
using namespace std;

void finfichero(int n,char s[20])
{
    int k,j=1,c=0;
    char ch=' ';
    fstream f;
    f.open(s,ios::in|ios::ate);
    k=f.tellg();
    cout<<"\n";
    while(1)
    {
        if(k<j)
        {
                f.seekg(0,ios::beg);
                while(!f.eof())
                {
                    f.get(ch);
                    cout<<ch;
                }
                break;
        }
        f.seekg(k-j,ios::beg);
        f.get(ch);
        if(ch=='\n')
        {
                c++;
                if(c==n)
                {
                    f.seekg(k-j+1,ios::beg);
                    while(!f.eof())
                    {
                        f.get(ch);
                        cout<<ch;
                    }
                    break;
                }
                else
                {
                    k=k-j-2;
                    j=0;
                }
        }
        j++;
    }
}

int main()
{
    char s[20];
    int n;
    cout<<"Enter file name : ";
    cin>>s;
    cout<<"Enter number of lines to read from  the end : ";
    cin>>n;
    finfichero(n,s);
    return 0;
}
