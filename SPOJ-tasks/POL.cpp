// POL - Po³owa

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0; i<t; i++)
    {
        string wyraz;
        getline(cin, wyraz);
        for(int j=0; j<(wyraz.length()/2); j++)
        cout<<wyraz[j];
        cout<<endl;
    }
    return 0;
}
