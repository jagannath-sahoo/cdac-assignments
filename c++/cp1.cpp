#include <iostream>

using namespace std;

int main()
{
	const int x = 10;
//	int  &y = x;
	int const &y = x;


	x++;//Compile time error as it's a constant type
	y++;

	cout << x << "\t" << y << endl;
	cout << &x << "\t" << &y << endl;
	return 0;
}
