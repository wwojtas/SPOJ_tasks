// PRZEDSZK - Przedszkolanka

#include <iostream>

using namespace std;
int main()
{
    int N, a, b, x, y, dzielnik;
    cin>> N;

    for(int i = 0; i<N; i++)
    {
        cin>>a>>b;
        x=a;
        y=b;

        while(b)
        {
            dzielnik = a % b;
            a = b;
            b = dzielnik;
        }
        cout<<(x*y)/a<<endl;
    }
    return 0;
}
