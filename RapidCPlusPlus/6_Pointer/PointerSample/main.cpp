#include <iostream>

using namespace std;

int main()
{
    // Pointer declaration & use
    int a = 256;
	// Declare and assign a memory address
    int *a_ptr = &a;

    cout << "Value of *a_ptr = " << *a_ptr << endl;
	*a_ptr = 100;

	cout << "Value of a = " << a << endl;

	// Pointer to Pointer
	int *b = &a;
	int **c = &b;

	cout << *b << endl;
	cout << *c << endl;
	cout << **c << endl;

	// Void pointer
	char d = 'z';
	void *d_ptr = (void *)&d;

	// Pointer arithmetic
    char e[4] = {'C', '+', '+', '\0'};
    char *e_ptr = e;

    cout << "Value of *e_ptr = " << *e_ptr << endl;
    cout << "Value of *(e_ptr+1) = " << *(e_ptr+1) << endl;

	// Pointer arithmetic
    long long l[4] = {10, 20, 30, 40};
    long long *l_ptr = l;

    cout << "Value of *l_ptr = " << *l_ptr << endl;
    a_ptr++;
    cout << "Value of *(l_ptr+1) = " << *l_ptr << endl;

    // References
	int ar = 100;
	int &br = ar;

	cout << "Value of br = " << br << endl;
	br = 200;
	cout << "Value of a = " << ar << endl;

    return 0;
}
