#include <iostream>
using namespace std;

namespace ns1
{
	int val = 100;
}

int main()
{
	cout << "Val = " << ns1::val << endl;
	return 0;
}
