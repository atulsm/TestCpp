#include <iostream>
#include "Substact.h"

using namespace std;

//this function is defined in Add.cpp
int add(int x, int y);

//This function is defined in the same file
int method();


int main()
{
	cout << "Hello world!" << endl;

	cout << method << endl;

	//int x; //uninitialized
	//cout << x;

	cout << add(1,2);

	cout << substract(2,1);

	//_sleep(2000);
	return 0;
}

int method()
{
    return 1;
}