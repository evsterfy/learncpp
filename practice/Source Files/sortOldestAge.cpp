//#include <cstddef>  // for std::size_t
//#include <iostream>
//#include <limits>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//
//
//std::pair<std::string, int> getNamesAndAgePairs(int i) {
//
//    std::vector<std::pair<std::string, int>> person;
//
//    std::cout << "Enter the name of person #" << i << ": ";
//    std::string fullName{};
//    std::getline(std::cin >> std::ws, fullName);
//
//    std::cout << "Enter the age of " << fullName << ": ";
//    int age{};
//    std::cin >> age;
//
//    return std::make_pair(fullName, age);
//}
//
//std::vector<std::pair<std::string, int>>& storeNamesAndAgePairs(std::vector<std::pair<std::string, int>>& person, int numPairs) {
//
//    for (int i = 0; i < numPairs; i++) {
//        auto [name, age] = getNamesAndAgePairs(i + 1);
//        person.push_back(std::make_pair(name, age));
//    }
//
//    return person;
//}
//
//
//std::vector<std::pair<std::string, int>>& sortPersonsByAge(std::vector<std::pair<std::string, int>>& person) {
//    std::sort(person.begin(), person.end(), [](const auto& a, const auto& b) {
//        return a.second > b.second; // Sort in descending order based on age.
//        });
//
//    return person;
//}
//
//
//void printAgeDescending(const std::vector<std::pair<std::string, int>>& person) {
//    for (const auto& p : person) {
//        std::cout << p.first << " (age " << p.second << ") is older than...\n";
//    }
//}
//
//int main() {
//
//    const int numPairs{ 10 }; // Number of name-age pairs to input.
//
//    std::vector<std::pair<std::string, int>> person{}; // Vector to store name-age pairs.
//
//    printAgeDescending(sortPersonsByAge(storeNamesAndAgePairs(person, numPairs))); // Chain the functions to store, sort, and print.
//
//    return 0;
//}