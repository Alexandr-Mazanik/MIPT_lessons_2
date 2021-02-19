#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	float average = 0;
	int *array = new int[count];
	for (int i=0; i < count; i++)
	{
		cin >> array[i];
		average += array[i];
	}
	average = average / count;
	
	int sum = 0;
	for (int i=0; i < count; i++)
		if (array[i] > average)
			sum += array[i];

	cout << endl << sum << endl;

	delete [] array;

	return 0;
}