// RNO_DOD - Proste dodawanie

#include <iostream>

using namespace std;

int main()
{
int t, n, q, suma;


    cin >> t;

    for(int i=0; i<t; i++)
    {
       suma = 0;
       cin >> n;

       for(int j=0; j<n; j++)
       {
          cin >> q;
          suma += q;
       }
       cout << suma << endl;
    }

return 0;
}
