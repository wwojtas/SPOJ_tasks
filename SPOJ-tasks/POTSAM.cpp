// POTSAM - Samolot

#include <iostream>

using namespace std;

int ilosci(int n1, int k1, int n2, int k2)
{
    int biznes = n1 * k1;
    int eko = n2 * k2;
    return biznes + eko;
}

int main()
{
    int n1, k1, n2, k2;
    cin>>n1>>k1>>n2>>k2;
    cout << ilosci(n1, k1, n2, k2) << endl;
    return 0;
}
