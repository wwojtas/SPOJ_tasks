// PP0602A - Parzyste nieparzyste

#include <iostream>
using namespace std;

int main()
{
    int liczbaTestow, ileLiczb;
    cin >> liczbaTestow;

    for (int i=0; i<liczbaTestow; i++)
    {
        cin >> ileLiczb;
        int *parzysteNieparzyste = new int [ileLiczb];

        for(int i=0; i<ileLiczb; i++)
        {
            cin >> *(parzysteNieparzyste + i);
        }
        for (int i=1; i<ileLiczb; i+=2)
        {
            cout << *(parzysteNieparzyste + i) << " ";
        }
        for (int i=0; i<ileLiczb; i+=2)
        {
            cout << *(parzysteNieparzyste + i) << " ";
        }

        delete[] parzysteNieparzyste;
        parzysteNieparzyste = NULL;

    }

    return 0;
}
