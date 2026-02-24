//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//
//
//std::pair<std::string, int> getNameAndAge(int index) {
//
//	std::string newName;
//	int newAge;
//
//    std::cout << "Enter the name of person #" << index << ": ";
//    std::getline(std::cin >> std::ws, newName);
//
//    std::cout << "Enter the age of " << newName << ": ";
//    std::cin >> newAge;
//
//    return std::make_pair(newName, newAge);
//}
//
//void sortWhoIsOlder(std::vector<std::pair<std::string, int>>& nameAgePairs) {
//
//    std::sort(nameAgePairs.begin(), nameAgePairs.end(), [](const auto& a, const auto& b) {
//        return a.second > b.second;
//    });
//}
//
//void whoIsOlder(const std::vector<std::pair<std::string, int>>& nameAgePairs) {
//
//	for (const auto& [name, age] : nameAgePairs) {
//        std::cout << name << " is " << age << " years old.\n";
//    }
//}
//
//int main() {
//
//    const int numNames = [] {
//        std::cout << "Enter how many ages you want to compare: ";
//        int n;
//        std::cin >> n;
//        return n;
//    }();
//
//    std::vector<std::pair<std::string, int>> nameAgePairs;
//
//    for (int i = 0; i < numNames; ++i) {
//		nameAgePairs.emplace_back(getNameAndAge(i + 1));
//    }
//
//    sortWhoIsOlder(nameAgePairs);
//
//    whoIsOlder(nameAgePairs);
//
//    return 0;
//}