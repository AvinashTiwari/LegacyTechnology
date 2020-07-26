#include <iostream>

using namespace std;

int main()
{
    // while Loop
	int a = 0;

	while (a < 10)
	{
		cout << a << endl;
		a++;
	}

	// do-while Loop
	do
	{
		cout << a << endl;
		a++;
	}
	while (a < 10);

	// for Loop
	for (a = 0; a < 10; a++)
	{
		cout << a << endl;
	}
    return 0;
}
