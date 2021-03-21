// MWPZ06X - Nowa dzialka

#include <iostream>
#include <cstdlib>

using namespace std;

int D;
int liczbaKrokow[1000];
int powierzchnia[1000];

int powierzchniaDzialki()
{
    cin>>D;
    for(int i=0; i<D; i++)
    {
        cin>>liczbaKrokow[i];
        powierzchnia[i]=liczbaKrokow[i]*liczbaKrokow[i];
    }

    for(int i=0; i<D; i++)
    {
        cout<< powierzchnia[i]<< endl;
    }
    exit(0);
}

int main()
{
   cout<< powierzchniaDzialki()<<endl;
}
