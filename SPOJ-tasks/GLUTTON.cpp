// GLUTTON - Obzartuchy


#include <iostream>

using namespace std;

int ileKupicPudelek (int liczbaObzartuchow, int iloscCistekWPudelku)
{
int iloscZjedzonychCiastek =0;

for(int i = 1; i <= liczbaObzartuchow; i++)
{
    int czasJedzenia;
    cin >> czasJedzenia;

    iloscZjedzonychCiastek += (60*60*24)/czasJedzenia;
}

if(iloscZjedzonychCiastek%iloscCistekWPudelku == 0)
{
    return iloscZjedzonychCiastek/iloscCistekWPudelku;
}
else
{
    return iloscZjedzonychCiastek/iloscCistekWPudelku + 1;
}
}
int main()
{
    int liczbaObzartuchow;
    int iloscCistekWPudelku;
    int liczbaTestow;

    cin >> liczbaTestow;

for(int i = 0; i < liczbaTestow; i++)
{
    cin >> liczbaObzartuchow;
    cin >> iloscCistekWPudelku;
    cout << ileKupicPudelek(liczbaObzartuchow,iloscCistekWPudelku)<<endl;

}
    return 0;
}
