// FLAMASTE - Flamaster

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

string konwersjaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int obliczWystapienieWybranegoZnaku(string wyraz, int pozycjaZnaku)
{
    int iloscWystapien = 1;
    if(wyraz.length()>pozycjaZnaku)
    {
        while(wyraz[pozycjaZnaku] == wyraz[pozycjaZnaku+1])
        {
            iloscWystapien++;
            pozycjaZnaku++;
        }
    }
    else
        iloscWystapien = 0;
    return iloscWystapien;
}

string skracanieWyrazow(string wyrazDoSkrocenia)
{
    int dlugosc = wyrazDoSkrocenia.length();
    int iloscWystapien = 1;
    char powtarzajacySieZnak;

    for (int i = 0; i < dlugosc-2; i++)
    {
      if ((wyrazDoSkrocenia[i] == wyrazDoSkrocenia[i + 1]) && (wyrazDoSkrocenia[i + 1] == wyrazDoSkrocenia[i + 2]))
      {

          iloscWystapien = obliczWystapienieWybranegoZnaku(wyrazDoSkrocenia, i);
          powtarzajacySieZnak = wyrazDoSkrocenia[i];
          wyrazDoSkrocenia.replace(i,iloscWystapien,powtarzajacySieZnak+konwersjaIntNaString(iloscWystapien));
          dlugosc = wyrazDoSkrocenia.length();
      }
    }
    return wyrazDoSkrocenia;
}

int main ()
{
    int iloscTestow;
    string wyraz;
    cin >> iloscTestow;

    for (int i=0; i<iloscTestow; i++)
    {
        cin >> wyraz;
        cout << skracanieWyrazow(wyraz) << endl;
    }

 return 0;
}
