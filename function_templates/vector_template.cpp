#include <iostream>
#include <string>
#include <vector>

template <typename data>
void print_vector(std::vector<data> vect) {
	for(auto i : vect) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::vector<int> int_vect;
	for(int i=3; i<22; i+=3) {
		int_vect.push_back(i);
	}
	print_vector(int_vect);

	std::vector<float> f_vect;
	for(auto i : int_vect) {
		f_vect.push_back((i+.6) * (i-2));
	}
	print_vector(f_vect);

	std::vector<double> double_vector;
	for(auto i : f_vect) {
		double_vector.push_back(i/2.5);
	}
	print_vector(double_vector);

	std::vector<std::string> str_vector;
	str_vector.push_back("Hello");
	str_vector.push_back("there");
	print_vector(str_vector);

	return 0;
}
