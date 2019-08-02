#include <iostream>

using namespace std;

//this in java is a reference
//in C++ is a pointer
//. struct var(Class var/obj)
//-> struct pointer(Class pointer)
//
//In Java no use of -> operation
//In C++ by default access specifier is private


//Class creation
class Item
{
	private:
	int data1;
	public:
	Item(){
		cout << "Default Constructor\n";
		data1 = 0;
	}
	Item(int data1){
		cout << "Parameterised Constructor\n";
                this->data1 =  data1;
        }

	~Item(){
		cout << "Destructor\n";
	}
	void setData(int data1)
	{
		this->data1 = data1;
	}
	int getData()
	{
		return data1;
		//this->data1;
	}
	friend void fun1(Item );	
};

void fun1(Item );

int main()
{
	
	Item ob1(100);//memory allocated to ob1 is 4 as it contains only
		 //only one member
	//cin >> i;
	//ob1.setData(2);
	fun1(ob1);
	cout << ob1.getData() <<endl;
	return 0;
}


void fun1(Item ob)
{
	cout << ob.data1 << endl;
	//cout << ob.getData() << endl;
	cout << "in fun1" << endl;
}
