#include <iostream>
using namespace std;

void returnNothing();

int return5()
{
    return 5;
}

int main()
{
	cout << "Hello world!" << std::endl;

	std::cout << return5 << std::endl;

	int x; //uninitialized
	cout << x;

	returnNothing();

	_sleep(2000);
	return 0;
}

void returnNothing()
{
    std::cout << "Hi" << std::endl;
    // This function does not return a value so no return statement is needed
}