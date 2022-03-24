

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double fak = 1;
    int sayi = 0;
    int sayi2 = 0;
    double fak2 = 1;
    double fak3 = 1;

    cout << "Enter Values =" << endl;
    cin >> sayi;
    cout << "Enter 2nd values" << endl;
    cin >> sayi2;

    for (int i = 2; i <= sayi; i++) 
    {
        fak *= i;
    }

    for (int i = 2; i <= (sayi-sayi2); i++)
    {
        fak2 *= i;
    }
    for (int i = 2; i <= sayi2; i++)
    {
        fak3 *= i;
    }
    double a = (fak / fak2);
    cout << "permutation = " << a << endl;
    cout << "Combination = " <<double (a/(fak3)) << endl;
}


