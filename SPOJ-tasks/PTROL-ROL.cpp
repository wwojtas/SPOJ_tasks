// PTROL - ROL

#include <iostream>
using namespace std;

int main()
{
    int liczbaTestow, ileLiczb;
    cin >> liczbaTestow;

    if (liczbaTestow <= 100)
    {
        for (int i=0; i<liczbaTestow; i++)
        {
        cin >> ileLiczb;
        int *przesunElementyLewo = new int [ileLiczb];

        for(int i=0; i<ileLiczb; i++)
        {
            cin >> *(przesunElementyLewo + i);
        }
        for (int i=1; i<ileLiczb; i++)
        {
            cout << *(przesunElementyLewo + i) << " ";
        }
        cout << *(przesunElementyLewo) << " ";

        delete[] przesunElementyLewo;
        przesunElementyLewo = NULL;
        }
    }
    return 0;
}
