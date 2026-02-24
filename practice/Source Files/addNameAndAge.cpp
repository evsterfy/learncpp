//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//#include <string>
//
//
//
//Full name length + age.
//Include all whitespace.
// 
//int main() {
//
//	std::cout << "Enter your full name: ";
//	std::string fullName{};
//	std::getline(std::cin >> std::ws, fullName);
//
//	std::cout << "Enter your age: ";
//	int age{};
//	std::cin >> age;
//
//	//int fullNameLength { static_cast<int>(fullName.length()) };
//	//int fullNameLength { std::ssize(fullName) };
//
//	std::cout << "Your age + length of name is: " << (age + std::ssize(fullName)) << std::endl; // static_cast<int>(fullName.length()); std::ssize(fullName); *Require type int*
//
//	return 0;
//}