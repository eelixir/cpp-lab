#include <iostream>
#include <vector>
#include <chrono>

int binarySearch(const std::vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    auto start = std::chrono::high_resolution_clock::now();

    int result = binarySearch(numbers, target);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    if(result != -1){
        std::cout << "Element found at index: " << result << std::endl;
    }else{
        std::cout << "Element not found." << std::endl;
    }

    std::cout << "Time taken: " << duration.count() << " nanoseconds" << std::endl;

    return 0;
}