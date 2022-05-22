#include <iostream>
using namespace std;


int main(int argc, char** argv) {

	int n;

	cout << "Please enter array values:";
	cin >> n;

	int *arr =new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter" << "" << (i + 1) << ". values:";
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Array values:" << arr[i] << endl;
	}

	int *counter =new int[n];
	for (int i = 0; i < n; i++)
	{
		counter[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (counter[i] == 0) {
			int count = 0;
			for (int j = i; j < n; j++) {
				if (arr[j] == arr[i]) {
					count += 1;
					counter[j] = 1;
				}
			}
			cout << arr[i] << "--> " << count  << endl;
		}
	}
	return 0;
}