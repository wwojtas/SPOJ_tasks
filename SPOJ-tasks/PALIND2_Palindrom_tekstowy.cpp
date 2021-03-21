#include <iostream>
#include <cstring>

using namespace std;

bool palindrom (string wyrazDoSprawdzenia)
{
    int dlugoscWyrazu = wyrazDoSprawdzenia.length();
    string odwroconyWyraz;

    for (int i=0; i < dlugoscWyrazu; i++)
    {
        odwroconyWyraz += wyrazDoSprawdzenia[dlugoscWyrazu-i-1];
    }

    if (odwroconyWyraz == wyrazDoSprawdzenia)
        return true;
    else
        return false;
}

    int main()
    {
        int liczbaTestow;

        cin >> liczbaTestow;
        for (int j=0; j<liczbaTestow; j++)
        {
            string wyrazDoSprawdzenia;
            cin >> wyrazDoSprawdzenia;
            if (palindrom(wyrazDoSprawdzenia)==true)
                cout << "tak" << endl;
            else
                cout << "nie" << endl;
        }

        return 0;
    }
