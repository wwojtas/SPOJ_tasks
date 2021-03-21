// PRIME_T - Liczby Pierwsze

#include <iostream>
#include <cmath>

using namespace std;

bool czyLiczbaPierwsza(int a)
{
	if(a < 2)
	{
	    return false;
	}

	for(int i = 2; i <= sqrt(a); i++)
	{
	    if(a % i == 0)
	    {
	        return false;
	    }
	}
	return true;
}

void wypiszOdpowiedz(int a)
{
        if(czyLiczbaPierwsza(a))
    		cout << "TAK" << endl;
    	else
    		cout << "NIE" << endl;
}

int main()
{
	int a, liczbaTestow;
	cin>>liczbaTestow;

	for(int i=0; i<liczbaTestow; i++)
	{
	    cin>>a;
    	wypiszOdpowiedz(a);
	}
return 0;
}
