// CALC - Kalkulator

#include <iostream>
using namespace std;
int main()
{
  char znak;
  while (cin>>znak)
  {
    int a,b,wynik;

    cin >> a>>b;

    switch (znak)
    {
      case '+':
      {
        wynik = a + b;
        break;
      }
      case '-':
      {
        wynik = a - b;
        break;
      }
      case '*':
      {
        wynik = a * b;
        break;
      }
      case '/':
      {
        wynik = a / b;
        break;
      }
      case '%':
      {
        wynik = a % b;
        break;
      }
      default:
      {
        cout << "Incorrect data" << endl;
        break;
      }
    }
    cout << wynik << endl;
  }
  return 0;
}
