//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//
//
//bool isPrime(int number) {
//	if (number <= 1) {
//		return false;
//	}
//	for (int i{ 2 }; i <= number / 2; ++i) {
//		if (number % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
// 
//	int number{};
//
//	do {
//		std::cout << "Enter a number to see if it is prime: ";
//		std::cin >> number;
//
//		isPrime(number) ? std::cout << "The digit is prime.\n" : std::cout << "The digit is NOT prime.\n";
//
//	} while (number > 1);
//
//	return 0;
//}