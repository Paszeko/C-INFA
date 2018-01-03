#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <fstream>
using namespace std;


int z10na2(int a, int b)
{
    cout<<"Przelicznik 10x2: "<<endl;
    do
    {

        if(a%2==0)
        {
            cout<<".1";

        }
        else
            cout<<".0";
            a=a/2;
    }
    while(a!=0);
return a;
}


int z10na8(int a, int b)
{
    cout<<"Przelicznik 10x8: "<<endl;
    do
    {

        if(a%8==0)
        {
            cout<<a;

        }
        else
            cout<<a;
            a=a/8;
    }
    while(a!=0);
return a;
}





int main()
{
    int a;
    int b;
    srand(time(NULL));



    cout<<"Hello World"<<endl;
cin>>a;

z10na2(a,b);
cout<<endl;
z10na8(a,b);
}
