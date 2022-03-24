#include <iostream>
using namespace std;

int main()
{


	

		int i, j, k, a, b, gecici, sayac = 0;
		double sayac2 = 0, gecici2, sayac3 = 0, sayac4 = 0, sayac5 = 0;

		cout<<("Dizinin boyutunu giriniz: ");
		cin>>a;
		int *dizi = new int[a];

		for (i = 0; i < a; i++)
		{
			cin>>gecici;
			dizi[i] = gecici;
			sayac += gecici;
		}

		for (i = 0; i < a - 1; i++)
		{
			for (j = i + 1; j < a; j++)
			{
				if (dizi[i] > dizi[j])
				{
					gecici = dizi[i];
					dizi[i] = dizi[j];
					dizi[j] = gecici;
				}
			}
		}

		for (i = 0; i < a; i++)
			cout<<dizi[i];

		gecici2 = (double)sayac / (double)a;

		for (i = 0; i < a; i++) {
			sayac2 += pow((dizi[i] - gecici2), (double)2) / (double)(a - 1);
			sayac4 += pow((dizi[i] - gecici2), (double)3) / (double)(a - 1);
			sayac5 += pow((dizi[i] - gecici2), (double)4) / (double)(a - 1);
		}


		cout<<"\n\n";
		cout<<"ortalama:"<<gecici2;
		for (i = 0; i < a; i++)
			sayac3 += fabs((double)(gecici2 - dizi[i]));

		for (i = 0; i < a; i++) {

		}
		cout<<endl<<endl;

		cout << "Dizinin varyansi:" << sayac2 << endl;
		cout << "Dizinin standart sapmasi:"<<pow(sayac2, 1 / (double)2) << endl;
		cout << "Dizinin ortalama mutlak sapmasi:"<<sayac3 / (double)a << endl;
		cout << "Dizinin Carpikligi:"<<sayac4 << endl;
		cout << "Dizinin Sivriligi:"<<sayac5 << endl;
		cout << "Varyasyon Katsayisi (D.K) :"<< pow(sayac2, 1 / (double)2) / gecici2 << endl;

		

		return 0;
	}

