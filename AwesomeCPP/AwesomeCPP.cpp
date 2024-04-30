// AwesomeCPP.cpp : Defines the entry point for the application.
//

#include "AwesomeCPP.h"


int main()
{
	auto a = 5;
	auto str = "Hello";
	auto b = 5.5;
	auto c = 5.5f;
	auto d = 5u;
	auto e = 5l;
	auto f = 5ll;
	auto g = 5ul;
	auto h = 5ull;
	auto i = 5.5e-5;
	auto j = 5.5e5;
	auto k = 0x5;
	auto l = 0b101;
	auto m = 0'000'005;
	auto n = 0b101'101;
	auto o = 0x5'5;
	auto p = 0x5'5'5;

	std::cout << "Hello" << '\n';
	std::cout << 99 << '\n';
	std::cout << a << '\n';
	std::cout << "Type of a: " << typeid(a).name() << '\n';
	std::cout << "Type of str: " << typeid(str).name() << '\n';
	std::cout << "Type of b: " << typeid(b).name() << '\n';
	std::cout << "Type of c: " << typeid(c).name() << '\n';
	std::cout << "Type of d: " << typeid(d).name() << '\n';
	std::cout << "Type of e: " << typeid(e).name() << '\n';
	std::cout << "Type of f: " << typeid(f).name() << '\n';
	std::cout << "Type of g: " << typeid(g).name() << '\n';
	std::cout << "Type of h: " << typeid(h).name() << '\n';
	std::cout << "Type of i: " << typeid(i).name() << '\n';
	std::cout << "Type of j: " << typeid(j).name() << '\n';
	std::cout << "Type of k: " << typeid(k).name() << '\n';
	std::cout << "Type of l: " << typeid(l).name() << '\n';
	std::cout << "Type of m: " << typeid(m).name() << '\n';
	std::cout << "Type of n: " << typeid(n).name() << '\n';
	std::cout << "Type of o: " << typeid(o).name() << '\n';
	std::cout << "Type of p: " << typeid(p).name() << '\n';

	return 0;
}
