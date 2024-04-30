// AwesomeCPP.cpp : Defines the entry point for the application.
//

#include "AwesomeCPP.h"

using std::cout;
using std::cin;

int subtract(int a, int b);
int subtract(int a, int b, int c);
double subtract(double a, double b);

int main()
{

//#pragma region Variables
//
//	auto a = 5;
//	auto str = "Hello";
//	auto b = 5.5;
//	auto c = 5.5f;
//	auto d = 5u;
//	auto e = 5l;
//	auto f = 5ll;
//	auto g = 5ul;
//	auto h = 5ull;
//	auto i = 5.5e-5;
//	auto j = 5.5e5;
//	auto k = 0x5;
//	auto l = 0b101;
//	auto m = 0'000'005;
//	auto n = 0b101'101;
//	auto o = 0x5'5;
//	auto p = 0x5'5'5;
//
//	cout << "Hello" << '\n';
//	cout << 99 << '\n';
//	cout << a << '\n';
//	cout << "Type of a: " << typeid(a).name() << '\n';
//	cout << "Type of str: " << typeid(str).name() << '\n';
//	cout << "Type of b: " << typeid(b).name() << '\n';
//	cout << "Type of c: " << typeid(c).name() << '\n';
//	cout << "Type of d: " << typeid(d).name() << '\n';
//	cout << "Type of e: " << typeid(e).name() << '\n';
//	cout << "Type of f: " << typeid(f).name() << '\n';
//	cout << "Type of g: " << typeid(g).name() << '\n';
//	cout << "Type of h: " << typeid(h).name() << '\n';
//	cout << "Type of i: " << typeid(i).name() << '\n';
//	cout << "Type of j: " << typeid(j).name() << '\n';
//	cout << "Type of k: " << typeid(k).name() << '\n';
//	cout << "Type of l: " << typeid(l).name() << '\n';
//	cout << "Type of m: " << typeid(m).name() << '\n';
//	cout << "Type of n: " << typeid(n).name() << '\n';
//	cout << "Type of o: " << typeid(o).name() << '\n';
//	cout << "Type of p: " << typeid(p).name() << '\n';
//
//#pragma endregion

//#pragma region Flow of Control
//
//	cout << "Enter a number:";
//	int input;
//	cin >> input;
//
//	if (input%2 == 0)
//	{
//		cout << "You entered a even number" << '\n';
//	}
//	else
//	{
//		cout << "You entered a odd number" << '\n';
//	}
//
//	cout << "Enter a number from 1 to 7:";
//	int inputWeekDay;
//	cin >> inputWeekDay;
//
//	switch (inputWeekDay)
//	{
//		case 1:
//			cout << "Monday" << '\n';
//			break;
//
//		case 2:
//			cout << "Tuesday" << '\n';
//			break;
//
//		case 3:
//			cout << "Wednesday" << '\n';
//			break;
//
//		case 4:
//			cout << "Thursday" << '\n';
//			break;
//
//		case 5:
//			cout << "Friday" << '\n';
//			break;
//
//		case 6:
//			cout << "Saturday" << '\n';
//			break;
//
//		case 7:
//			cout << "Sunday" << '\n';
//			break;
//
//		default:
//			cout << "Invalid input" << '\n';
//			break;
//	}
//#pragma endregion

#pragma region Functions

	auto add = [](int a, int b) -> int
		{
		return a + b;
	};

	auto result = add(5, 6);
	cout << "Result of add function: " << result << '\n';
	cout << "Result of subtract function: " << subtract(5, 6) << '\n';
	cout << "Result of subtract function: " << subtract(5, 6, 7) << '\n';
	cout << "Result of subtract function: " << subtract(6.2, 9.9) << '\n';

#pragma endregion

	return 0;
}

