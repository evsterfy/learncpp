//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//#include <algorithm>
//#include <vector>
//
//
//
//char getOperator() {
//
//	char charOperator{};
//
//	std::cout << "Enter +, -, *, /, or =: ";
//	std::cin >> charOperator;
//
//	return charOperator;
//}
//
//double getValue() {
//
//	double newValue{};
//
//	std::cout << "Enter a double value: ";
//	std::cin >> newValue;
//
//	return newValue;
//}
//
//double solveAnswer(double y, char charOperator, double x) {
//	switch (charOperator) {
//	case '*':
//		return (x * y);
//		break;
//	case '/':
//		return (x / y);
//		break;
//	case '+':
//		return (x + y);
//		break;
//	case '-':
//		return (x - y);
//		break;
//	case '=':
//		return (x);
//		break;
//	default:
//		break;
//	}
//}
//
//double solveAnswer(std::tuple<double, char, double> numOperatorTuple) {
//	double x{ std::get<0>(numOperatorTuple) };
//	char charOperator{ std::get<1>(numOperatorTuple) };
//	double y{ std::get<2>(numOperatorTuple) };
//	return solveAnswer(y, charOperator, x);
//}
//
//int main() {
//
//	std::vector<std::tuple<double, char, double>> numOperatorTuples{};
//	std::vector<double> results{};
//	char charOperator{};
//	char checkEquals{};
//
//	results.push_back(solveAnswer(std::make_tuple(getValue(), getOperator(), getValue())));
//
//	do {
//
//		numOperatorTuples.emplace_back(solveAnswer(std::make_tuple(results.back(), getOperator(), getValue())));
//
//		results.push_back(solveAnswer(numOperatorTuples.back()));
//
//	} while (true);
//
//	return 0;
//}