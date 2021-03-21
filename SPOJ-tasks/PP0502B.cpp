// PP0502B - Tablice

#include <iostream>
using namespace std;

int main ()
{
    int n,t;
    int tab[100];
    cin>>t;
    if (t<=100)
    {
        for (int i=0; i<t; i++)
        {
            cin>>n;

            for (int i=0; i<n; i++) cin>>tab[i];

            for (int i=n-1; i>=0; i--) cout<<tab[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
