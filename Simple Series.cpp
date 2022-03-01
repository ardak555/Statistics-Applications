#include <iostream>

using namespace std;

int main()
{
    int arrleng, i, temp, k, j;
    cout << "Please enter the number of numbers you want to enter";
    cin >> arrleng;

    int *arr= new int[arrleng];

    cout << "Please enter the numbers to be sorted : ";
    for (i = 0; i < arrleng; i++) {
       
        cin >> k;
        arr[i] = k;
    }
	cout << "Chosen number: ";
	for (i = 0; i < arrleng; i++)
		cout<< arr[i] << " ";
        

	

	for (i = 0; i < arrleng; i++)
	{
		for (j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Shorted number:";
	for (i = 0; i < arrleng; i++)
		cout << arr[i] << " ";
		

	
	return 0;

}
	
	
