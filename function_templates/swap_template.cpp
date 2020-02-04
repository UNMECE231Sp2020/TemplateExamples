#include <iostream>
#include <string>

void swap_i(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
void swap_f(float &x, float &y) {
	float temp = x;
	x = y;
	y = temp;
}
void swap_s(std::string &x, std::string &y) {
	std::string temp = x;
	x = y;
	y = temp;
}
void swap_d(double &x, double &y) {
	double temp = x;
	x = y;
	y = temp;
}

template <typename datatype>
void swap(datatype &x, datatype &y) {
	datatype temp = x;
	x = y;
	y = temp;
}

int main() {
	int a=1, b=2;
	std::cout << "Original int: " << a << " " << b << std::endl;
	swap_i(a, b);
	std::cout << "Swapped int: " << a << " " << b << std::endl;

	float c=0.9, d=8.3;
	std::cout << "Original float: " << c << " " << d << std::endl;
	swap_f(c, d);
	std::cout << "Swapped float: " << c << " " << d << std::endl;

	double e=3.13424, f=7.123543;
	std::cout << "Original double: " << e << " " << f << std::endl;
	swap_d(e, f);
	std::cout << "Swapped double: " << e << " " << f << std::endl;

	std::string s="Hi", t="Lo";
	std::cout << "Original string: " << s << " " << t << std::endl;
	swap_s(s, t);
	std::cout << "Swapped string: " << s << " " << t << std::endl;

	std::cout << std::endl << "Swapping back" << std::endl;
	swap(a, b);
	swap(c, d);
	swap(e, f);
	swap(s, t);

	std::cout << a << " " << b << std::endl;
	std::cout << c << " " << d << std::endl;
	std::cout << e << " " << f << std::endl;
	std::cout << s << " " << t << std::endl;
	return 0;
}
