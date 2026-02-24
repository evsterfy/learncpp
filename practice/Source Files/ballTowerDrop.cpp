//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//
//
//double getTowerHeight() {
//
//	std::cout << "Enter the height of the tower in meters: ";
//
//	double towerHeightMeters{ };
//	std::cin >> towerHeightMeters;
//
//	return towerHeightMeters;
//}
//
//void gravityFunction(double ballHeightMeters) {
//
//	const double gravity { 9.8 };
//	double newHeight{ ballHeightMeters };
//
//	for (double seconds = 0.0; ; seconds++) {
//		newHeight = (ballHeightMeters - (gravity * std::pow(seconds, 2) / 2.0));
//
//		std::cout << "At " << seconds << " seconds, the ball is ";
//
//		if (newHeight >= 0) {
//			std::cout << "at a height : " << newHeight << std::endl;
//		}
//		else {
//			std::cout << "on the ground." << std::endl;
//			return;
//		}
//	}
//}
//
//int main() {
//
//	gravityFunction(getTowerHeight());
//
//	return 0;
//}