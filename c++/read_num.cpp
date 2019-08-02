#include <iostream>
using namespace std;
/**********************
 * Namespace std provides the indentifiers for
 * c++ libraries
 * it contains cout,cin and other classes and
 * objects
 * */

int main()
{
	int num = 0;
	//to print on terminal
	cout << "Enter a number"<< endl;
	//to read from the terminal
	cin >> num;
	//we can typecast and concate as well
	cout << "Entered Number is " << num << endl;
	return 0;
}
