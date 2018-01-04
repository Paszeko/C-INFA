#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <fstream>
using namespace std;

ifstream dane_systemy1;
ifstream dane_systemy2;
ifstream dane_systemy3;

int main() {

    dane_systemy1.open("dane_systemy1.txt");
    if(dane_systemy1.good()) {
        cout<<"plik dane_systemy1 otwarto"<<endl;
    } else {
        cout<<"pliku nie znaleziono"<<endl;
    }

    dane_systemy2.open("dane_systemy2.txt");
    if(dane_systemy2.good()) {
        cout<<"plik dane_systemy2 otwarto"<<endl;
    } else {
        cout<<"pliku nie znaleziono"<<endl;
    }


    dane_systemy3.open("dane_systemy3.txt");
    if(dane_systemy3.good()) {
        cout<<"plik dane_systemy3 otwarto"<<endl;
    } else {
        cout<<"pliku nie znaleziono"<<endl;
    }


string a;

    while(!dane_systemy1.eof())

    {

        dane_systemy1 >> a;

        cout << a << endl;

    }






    return 0;
}
