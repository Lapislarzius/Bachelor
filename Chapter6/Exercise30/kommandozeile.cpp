#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	//GSVCPD 
	char** pp, * z;
	if (argc > 1)
	{
		pp = argv + 1;
		z = *pp + strlen(*pp);

		while (*pp - --z)
			cout << -- * z;

		cout << *z << endl;
	}
	return 0;
}