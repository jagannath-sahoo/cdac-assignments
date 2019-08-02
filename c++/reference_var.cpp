#include <iostream>

using namespace std;

int main()
{
	int x = 10;
//	int  &y = x;
	int const &y = x;


	x++;
	y++;

	cout << x << "\t" << y << endl;
	cout << &x << "\t" << &y << endl;
	return 0;
}
