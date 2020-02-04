#include <iostream>

int add_int(int x, int y) {
	return x + y;
}

float add_float(float x, float y) {
	return x + y;
}

double add_double(double x, double y) {
	return x + y;
}

template <typename number>
number add(number x, number y) {
	return x + y;
}

int main() {
	int a=8, b=6;
	std::cout << "Adding ints: " << add_int(a, b) << std::endl;

	float c=7.2, d=4.3;
	std::cout << "Adding floats: " << add_float(c, d) << std::endl;

	double e=5.68394, f=9.1245;
	std::cout << "Adding doubles: " << add_double(e, f) << std::endl;
	std::cout << std::endl;

	std::cout << "Calling template function for int, float, then double";
	std::cout << std::endl;

	std::cout << add(a, b) << " " << add(c, d) << " ";
	std::cout << add(e, f) << std::endl;

	return 0;
}
