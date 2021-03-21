// DOUGHNUT - Harry and big doughnuts

#include <iostream>
#include <cstdlib>

using namespace std;

int paczki(int t)
{
    for(int i=1; i<=t; i++)
    {
        int c,k,w;
        cin>>c>>k>>w;
        if((c*w)>k)
        {
            cout<< "no";
        }
        else
        {
            cout<< "yes";
        }
        cout<< endl;
    }
    exit(0);
}

int main()
{
    int t;
    cin>>t;
    cin.get();
    cout<< paczki(t);
    return 0;
}
