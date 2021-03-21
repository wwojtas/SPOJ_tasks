// JLITOSL - Liczba na s³owo

#include <iostream>
#include <map>
using namespace std;

const map < short, string > zestawLiczbOrazSlow  {
    { 0, "" }, { 1, " jeden" }, { 2, " dwa" }, { 3, " trzy" }, { 4, " cztery" }, { 5, " piec" },
    { 6, " szesc" }, { 7, " siedem" }, { 8, " osiem" }, { 9, " dziewiec" }, { 10, " dziesiec" },
    { 11, " jedenascie" }, { 12, " dwanascie" }, { 13, " trzynascie" }, { 14, " czternascie" }, { 15, " pietnascie" },
    { 16, " szesnascie" }, { 17, " siedemnascie" }, { 18, " osiemnascie" }, { 19, " dziewietnascie" },
    { 20, " dwadziescia" }, { 30, " trzydziesci" }, { 40, " czterdziesci" }, { 50, " piecdziesiat" },
    { 60, " szescdziesiat" }, { 70, " siedemdziesiat" }, { 80, " osiemdziesiat" }, { 90, " dziewiecdziesiat" },
    { 100, " sto" }, { 200, " dwiescie" }, { 300, " trzysta" }, { 400, " czterysta" }, { 500, " piecset" },
    { 600, " szescset" }, { 700, " siedemset" }, { 800, " osiemset" }, { 900, " dziewiecset" }
};
const string skalaWielkosci[ 5 ] = { "", " tys.", " mln.", " mld.", " bln." };

int main() {

    short iloscTestow = 0;
    cin >> iloscTestow;

    while( iloscTestow-- ) {

        long long int liczbaNaturalna = 0;
        string slownie = "";
        short malyWskaznik { 0 }, j { 0 }, reszta { 0 };

        cin >> liczbaNaturalna;

        if( liczbaNaturalna == 0 ) slownie = "zero";
        else {
            while( liczbaNaturalna > 0 ) {

                reszta = liczbaNaturalna % 10;
                liczbaNaturalna /= 10;
                if(( j == 0 ) && ( liczbaNaturalna % 100 != 0 || reszta != 0 ) )
                    slownie.insert( 0, skalaWielkosci[ malyWskaznik ] );

                if(( j == 0 ) && ( liczbaNaturalna % 10 != 1 ) )
                    slownie.insert( 0, zestawLiczbOrazSlow.find( reszta ) -> second );

                if(( j == 0 ) && ( liczbaNaturalna % 10 == 1 ) ) {
                    slownie.insert( 0, zestawLiczbOrazSlow.find( reszta + 10 ) -> second );
                    liczbaNaturalna /= 10;
                    j += 2;
                    continue;
                }
                if( j == 1 )
                    slownie.insert( 0, zestawLiczbOrazSlow.find( reszta * 10 ) -> second );

                if( j == 2 ) {
                    slownie.insert( 0, zestawLiczbOrazSlow.find( reszta * 100 ) -> second );
                    j = - 1;
                    if( malyWskaznik < 5 )
                        ++malyWskaznik;
                }
                ++j;
            }
            cout << slownie << endl;
        }
    }
    return 0;
}
