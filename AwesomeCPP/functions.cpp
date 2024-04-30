#include "AwesomeCPP.h"

using std::cout;

int subtract(int a, int b)
{
	cout << "Int subtract called ";
	return a - b;
}

int subtract(int a, int b, int c)
{
	cout << "Int subtract with three arguments called ";
	return a - b - c;
}

double subtract(double a, double b)
{
	cout << "Double subtract called ";
	return a - b;
}