

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   char a[256] = {'\0'};
   strcpy(a, "Hello World");
   cout << a << endl;
    return 0;
}
