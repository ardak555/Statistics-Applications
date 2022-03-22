#include <iostream>

using namespace std;

int main()
{
	int min, max, num, random, i, j, a, b ;

    cout<<("Enter the minimum value:");
	cin>>min;
	cout << ("Enter the maximum value:");
	cin >> max;
	cout << ("How many numbers should be generated:");
	cin >> num;
	srand(time(NULL));

	int* d = new int[num];
	
	if (num <= (max - min)) {
		for (i = 0; i < num; i++)
		{
		e:
			random = min + (rand() % (max - min));
			for (j = 0; j < num; j++) {
				if (random == d[j])
					goto e;
			}

			d[i] = random;

		}
	}
	else {
		for (i = 0; i < num; i++)
		{

			random = min + (rand() % (max - min));
			d[i] = random;

		}
	}

	for (i = 0; i < num; i++)
		cout<<d[i]<<" ";
}