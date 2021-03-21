// AL_05_01 - Czarodziejskie lusterko


#include <iostream>
#include <math.h>

using namespace std;

unsigned long long changeBinary (unsigned long long n)
{
    short binarna[70];
    int i=0;
    for(i = 0; n > 0; i++)
    {
        binarna[i] = n % 2;
        n = n / 2;
    }
    unsigned long long liczbaDziesietna = 0;
    unsigned long long potega = 1;
    for(i = i - 1; i >= 0; i--)
    {
        liczbaDziesietna += binarna[i] * potega;
        potega = potega *2;
    }
    return liczbaDziesietna;
}


int main()
{
    unsigned long long liczba;
    while(cin >> liczba)
    {
        cout << changeBinary(liczba) << endl;
    }
    return 0;
}
