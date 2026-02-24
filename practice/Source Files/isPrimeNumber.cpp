//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>


//bool isPrime(int number) {
//	if (number == 2 || number == 3 || number == 5 || number == 7) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	int number{};
//
//	do {
//		std::cout << "Enter a number 0 - 9: ";
//
//		std::cin >> number;
//
//		if (number < 0 || number > 9) {
//			std::cout << "Incorrect range! Enter a number 0 - 9: " << std::endl;
//		}
//
//	} while (number < 0 || number > 9);
//
//	std::cout << (isPrime(number) ? "The digit is prime." : "The digit is not prime.") << std::endl;
//
//	return 0;
//}