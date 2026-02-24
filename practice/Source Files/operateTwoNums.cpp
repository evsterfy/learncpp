//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//
//
//double getValue();
//char getOperator();
//double solveAnswer(char numOperator, double y, double x);
//
//double getValue() {
//	double num {};
//
//	std::cout << "Enter a double value: ";
//	std::cin >> num;
//
//	return num;
//}
//
//char getOperator() {
//	std::cout << "Enter +, -, *, or /: \n";
//
//	char numOperator{};
//
//	std::cin >> numOperator;
//
//	return numOperator;
//}
//
//double solveAnswer(char numOperator, double y, double x) {
//	switch (numOperator) {
//		case '+' :
//			return (x + y);
//			break;
//		case '-' :
//			return (x - y);
//			break;
//		case '*' :
//			return (x * y);
//			break;
//		case '/' :
//			return (x / y);
//			break;
//	}
//}
//
//int main() {
//
//	std::cout << solveAnswer(getOperator(), getValue(), getValue()) << std::endl;
//
//	return 0;
//}