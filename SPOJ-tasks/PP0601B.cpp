// PP0601B - Podzielnosc

#include <iostream>
#include <cstdlib>

using namespace std;

int podzielneNiepodzielne()
{
    int t;
    cin>>t;
    int n, x, y;

    for (int i=0; i<t; i++)
    {
        cin>>n>>x>>y;

        for (int i=0; i<n; i++)
        {
            if(i%x == 0 && i%y != 0 )
            {
                cout<<i<<" ";
            }
        }
        cout << endl;
    }
    exit(0);
}

int main()
{
    cout << podzielneNiepodzielne();
    return 0;
}
