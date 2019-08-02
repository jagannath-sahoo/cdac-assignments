#include <iostream>
namespace ns1 {
int x = 10;
using namespace std;
namespace ns2{
	int x = 20;
	void fun(){
	cout << "Hello\n";
	}
}
}


int main()
{
	std::cout << ns1::ns2::x<<"\n";
	std::cout << ns1::ns2::fun();
	return 0;
}
