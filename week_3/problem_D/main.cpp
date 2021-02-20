#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int* now_get_me_some_bytes(unsigned int n)
{
	int *p = new int [n];

	return p;
}	

void now_free_some_bytes(int* p)
{
	delete [] p;
}

int main() {
    unsigned int n;
    cin >> n;
    
    int *array = now_get_me_some_bytes(n);
    for (int i=0; i < n; i++)
    	cin >> array[i];

    int sum = 0;
    for (int i=0; i < n; i++)
    	sum += array[i];
    
    if (sum % 2)
    	cout << "NO" << endl;
    else 
    	cout << "YES" << endl;
    
    now_free_some_bytes(array);
    
    return 0;
}