// JGGHACK - Lamacz gg

#include <iostream>
using namespace std;

void dekoder(string password)
{
    string letters = "ABCDEFGHIJKLMNOP";
    int tab_1[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int tab_2[16] = {0,16,32,48,64,80,96,112,128,144,160,176,192,208,224,240};
    int dlugosc = password.size();
    int value_1 = 0;
    int value_2 = 0;
    int sum_value = 0;

    for (int i = 0; i < dlugosc; i = i + 2)
    {
        int j = 0;
        int k = 0;
        while (j <= 15)
        {
            if (password[i] == letters[j])
            {
                value_1 = tab_1[j];
                break;
            }
            j++;
        }

        while (k <= 15)
        {
            if (password[i+1] == letters[k])
            {
                value_2 = tab_2[k];
                break;
            }
            k++;
        }
        sum_value = value_1 + value_2;
        cout << (char)sum_value;
    }
}

int main()
{
    string password;
    while(getline(cin, password))
    {
         dekoder(password);
         cout << endl;
    }

     return 0;
}
