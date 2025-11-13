#include <iostream>
#include "searchUtils.h"

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    auto arr = generateSortedVector(n);

    int linComp, binComp;
    int key = n + 1; // deliberately searching for a non-existent element

    int linIndex = linearSearch(arr, key, linComp);
    int binIndex = binarySearch(arr, key, binComp);

    std::cout << "Linear search: vector size = " << n
              << ", comparisons = " << linComp << "\n";
    std::cout << "Binary search: vector size = " << n
              << ", comparisons = " << binComp << "\n";

    return 0;
}
