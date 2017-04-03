#include <iostream>
using namespace std;

//this function is defined in Add.cpp
int add(int x, int y);

int return5()
{
    return 5;
}

int main()
{
	cout << "Hello world!" << std::endl;

	std::cout << return5 << std::endl;

	int x; //uninitialized
	//cout << x;

	cout << add(1,2);

	_sleep(2000);
	return 0;
}