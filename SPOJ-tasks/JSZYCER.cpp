// JSZYCER - Szyfr Cezara

#include <iostream>

using namespace std;

int main()
{
    string napis;
    while(getline(cin,napis))
    {
        for(int i=0; i<napis.length(); i++)
        {
            if(napis[i] > 87)
            {
                if(napis[i] == 'X')
                    napis[i] = 'A';
                if(napis[i] == 'Y')
                    napis[i] = 'B';
                if(napis[i] == 'Z')
                    napis[i] = 'C';
            }
            else if (napis[i] > 64)
            {
                napis[i] = napis[i] + 3;
            }
        }
        for (int i=0; i<napis.length(); i++)
        {
            cout<<napis[i];
        }

        cout<<'\n';
    }
    return 0;
}
