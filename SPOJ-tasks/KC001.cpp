// KC001 - Dodawanie liczb całkowitych

#include <iostream>

using namespace std;

int suma(int a, int b, int c)
{
     return a + b + c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << suma(a, b, c) << endl;
}
