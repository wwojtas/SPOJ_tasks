// JPESEL - Pesel

#include <iostream>

using namespace std;

string sprawdzPesel(string liczba)
{
    int pesel[11];
    int szyfr[11] = {1,3,7,9,1,3,7,9,1,3,1};
    int suma = 0;

     for(int i=0; i<11; i++)
        {
            pesel[i]=liczba[i]-48;
        }

    for(int i=0; i<11; i++)
        {
            suma= suma + pesel[i]*szyfr[i];
        }

    string wynik;
    if(suma % 10 == 0)
       wynik = "D";
    else
       wynik = "N";

    return wynik;
}


int main()
{
    int liczbaTestow;
    string pesel;
    cin >> liczbaTestow;

    for(int i = 0; i<liczbaTestow; i++)
    {
        cin >> pesel;
        cout << sprawdzPesel(pesel) << endl;
    }
    return 0;
}
