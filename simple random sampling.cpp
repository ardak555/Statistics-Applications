#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main()//0 N arasınd dizi içerisindeki n kadar syı üret üret 
{
	int N, n, i, j, Random;
	cout << "Please enter the number pool amount you want to enter:";
	cin >> N;
	cout << "Please enter the number of numbersnumber of numbers:";
	cin >> n;
	cout << "Number pool amount:" << N << " " << "Number of selected numbers:" << n << endl;

	int* number = new int[N];

	for (i = 0; i < N; i++) {
		cin >> number[i];
	}
	cout << "Entered numbers:";
	for (j = 0; j < N; j++) {
		cout << number[j] << " ";
	}
	cout << endl;


	bool* y = new bool[N];
	for (i = 0; i < N; i++) {
		y[i] = false;
	}

	srand(time(NULL));
	if (n > N)
	{
		for (i = 0; i < n; i++)
		{
			Random = rand() % N;
			cout << number[Random] << " ";
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			while (y[Random = rand() % N] == true);
			cout << number[Random] << " ";
			y[Random] = true;
		}
	}
}
	

