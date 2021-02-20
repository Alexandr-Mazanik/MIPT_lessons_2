#include <iostream>

using namespace std;

int do_some_awesome_work(int* a, int* b)
{
	if (*a < *b)
		return *a;
	else
		return *b;
}

int main(int argc, char const *argv[])
{
	int num1, num2;
	cin >> num1 >> num2;

	int *p_num1 = &num1;
	int *p_num2 = &num2;

	int result = do_some_awesome_work(p_num1, p_num2);

	cout << endl << result << endl;

	return 0;
}