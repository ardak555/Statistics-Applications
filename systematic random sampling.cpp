#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    int N,n,k,a,i,g,r;
    a:cout << "Please enter N value:";
    cin >> N ;
    cout << endl;
    b:cout << "Please enter n value:";
    cin >> n;

    if (N < n) {
        cout << "ERROR:N cannot be less than n. Please enter N value greater than n. "<< endl;
        goto a;
    }
    else if (N% n != 0) {
        cout << "ERROR:N must be exactly divisible by n"<< endl;
        cout << "Your N values:" << N << endl;
        goto b;
            
    }
    else {
        cout << "N:" << N << " " << "n:" << n << endl;
        k = N / n;
        cout << "Your plate is:" << k << endl;
        srand(time(NULL));
        a = 1 + rand() % k;
        cout <<"Chosen number is:" << a << endl;
        cout << "Statics resault:";
        
            for (int j =0;j < n;j++) {
                r = a + j * k;
                cout << r<< endl;
            }
        
    }
}

