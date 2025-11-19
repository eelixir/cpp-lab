#include <iostream>
#include <vector>
#include <algorithm> 
#include <chrono>

int main() {
    std::vector<int> numbers = {5, 1, 9, 3, 7};

    auto start = std::chrono::high_resolution_clock::now();

    // sort from beginning to end
    std::sort(numbers.begin(), numbers.end());

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    for (int n : numbers) std::cout << n << " ";
    std::cout << "\nTime taken: " << duration.count() << " nanoseconds" << std::endl;

    return 0;
}