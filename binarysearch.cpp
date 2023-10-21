#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is equal to the target
        if (arr[mid] == target) {
            return mid; // Element found, return its index
        }
        // If the target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Element not found in the vector
}

int main() {
    std::vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15};
    int targetElement = 7;
    int result = binarySearch(sortedArray, targetElement);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the vector." << std::endl;
    }

    return 0;
}
