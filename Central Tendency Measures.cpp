#include <iostream>

using namespace std;

int main()
{
	int n, gecici, i, j, gecici2, sayac = 0, a, b = 1, sayac2 = 1;
	float t, k, m, sayac3 = 0;
	double s;

	cout<<"Dizinin boyutunu giriniz: ";
	cin>>n;

	int* dizi = new int[n];
	int* dizi2= new int[n];

	for (i = 0; i < n; i++) {
		cout<<(i + 1)<<"degeri giriniz: ";
		cin>>gecici;
		dizi[i] = gecici;
		sayac += gecici;
		sayac2 *= gecici;
		sayac3 += 1 / (double)gecici;
	}

	cout << endl << endl;
	for (i = 0; i < n; i++)
		cout<<dizi[i];


	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (dizi[i] < dizi[j])
			{
				gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}

	}

	cout << endl;;
	for (i = 0; i < n; i++)
		cout<<dizi[i];



	cout<<("\n\n");


	cout<<"1- DIZININ ARITMETIK ORTALAMASINI BULMAK ICIN SECINIZ.\n";
	cout<<"2- DIZININ MEDYANINI BULMAK ICIN SECINIZ.\n";
	cout<<"3- DIZININ MODUNU BULMAK ICIN SECINIZ.\n";
	cout<<"4- DIZININ GEOMETRIK ORTALAMASINI BULMAK ICIN SECINIZ \n";
	cout<<"5- DIZININ HARMONIK ORTALAMASINI BULMAK ICIN SECINIZ\n";
	cout<<"6- CIKIS YAPMAK İCİN SECINIZ.";

	while (b) {
		cout<<"\n\n";
		cout<<"SECIMINIZ: ";
		cin>>a;
		switch (a)
		{
		case 1:
			cout<<"dizinin aritmetik ortalamasi:"<< (sayac / n);
			break;

		case 2:
			if ((n % 2) == 0)
			{
				t = (float)(dizi[n / 2] + dizi[(n / 2) - 1]) / 2;
				cout<<"dizinin medyani:"<<t;
			}

			else
				cout<<"dizinin medyani:"<<dizi[n / 2];
			break;

		case 3:
			for (i = 0; i < n; i++) {
				dizi2[i] = 0;
				gecici = i;
				while (dizi[i] == dizi[i + 1]) {
					dizi2[gecici] += 1;
					i++;
				}
				i = gecici;
			}
			gecici = dizi2[0];

			for (i = 0; i < n; i++) {
				if (dizi2[i] > gecici) {
					gecici = dizi2[i];
				}
			}
			cout<<"Dizinin modu: ";
			for (i = 0; i < n; i++) {
				if (dizi2[i] == gecici) {
					cout<<dizi[i];
				}
			}

			break;

		case 4:
			cout<<"Dizinin geometrik ortalamasi:"<<pow((double)sayac2, 1 / (double)n);
			break;
		case 5:
			k = (double)sayac3;
			m = (double)n;
			s = n / sayac3;

			cout<<"DİZİNİN HARMONİK ORTALAMASI:"<<s;
			break;
		case 6:
			b = 0;
			break;

		}
	}


	cout << endl;
	cout<<"CIKIS YAPTINIZ...";

}

