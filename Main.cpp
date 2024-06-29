#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

int main() {
    std::list<int> randomList;

    
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < 100; ++i) {
        randomList.push_back(rand() % 201);
    }

   
    std::cout << "List content:" << std::endl;
    for (const auto& elem : randomList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    
    randomList.front() = 201;
    auto it = randomList.begin();
    std::advance(it, 1);
    *it = 202;
    randomList.back() = 203;

    
    auto fourthElement = std::next(randomList.begin(), 3);
    auto penultimateElement = std::prev(randomList.end(), 2);
    std::cout << "Value of 4'th element: " << *fourthElement << std::endl;
    std::cout << "Value of pre-last element: " << *penultimateElement << std::endl;

   
    std::swap(randomList.front(), *penultimateElement);

    
    std::cout << "List content after a shuffling:" << std::endl;
    for (const auto& elem : randomList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
