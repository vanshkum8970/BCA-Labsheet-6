// Program 20: Search Largest Element in Sorted Array Using Binary Search
#include <iostream>
using namespace std;

int main() {
    // Sorted array me sabse bada element last index par hota hai
    int arr[5] = {10, 25, 45, 60, 95};
    int n = 5;
    int low = 0, high = n - 1;
    int largestIndex = high; // directly arr[high] is largest

    cout << "Largest element found at index " << largestIndex << " is " << arr[largestIndex] << endl;
    return 0;
}
